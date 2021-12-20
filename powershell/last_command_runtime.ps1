((h)[-1].EndExecutionTime - (h)[-1].StartExecutionTime).TotalMilliseconds

# Because it pains me to leave it as above (alias = evil!):
#
# $LastCommand = (Get-History)[-1]
# $Duration = $LastCommand.EndExecutionTime - $LastCommand.StartExecutionTime
# $Duration.TotalMilliseconds
#
# Or on PowerShell 7.0+:
#
# (h)[-1].Duration.TotalMilliseconds
