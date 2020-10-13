(Invoke-WebRequest "http://api.open-notify.org/astros.json" | ConvertFrom-Json).people
#note, I got the idea from PowerShell.com a while ago, but I cannot find it now.