# draw a decorated Christmas tree in a PowerShell one-liner
(1..25) | % { if ($_ -le 24) { " "*(24-$_) + (get-random -count $_ -inputobject ("////\\\\**"*50).toCharArray()) -join "" } else {"          M E R R Y   C H R I S T M A S"} }
