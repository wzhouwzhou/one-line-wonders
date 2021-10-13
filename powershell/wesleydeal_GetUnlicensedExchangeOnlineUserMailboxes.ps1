# finds users in your Exchange Online deployment which have a mailbox but do not have a license, then exports the list as a CSV to the current directory
# this licensing situation can easily occur when migrating users to Exchange Online from an on-premises Exchange installation
# if licensing is not assigned, these users will lose mailbox access within 30 days
# to run this one-liner, you will need to have already installed the Exchange Online Powershell V2 module and connected
Get-Mailbox -Resultsize Unlimited | ? {($_.recipienttypedetails -ne "Discoverymailbox") -and ($_.recipienttypedetails -ne "SharedMailbox") -and ($_.recipienttypedetails -ne "RoomMailbox") -and ($_.skuassigned -ne "True")} | select name,userprincipalname,skuassign* | export-csv ("./unlicensed"+(Get-Date -Format "yyyy-MM-ddTHH-mm-ss-ff")+".csv")
