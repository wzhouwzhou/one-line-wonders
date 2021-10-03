$array = @(1, 10, 7, 1, 1, 4)

Write-Host $array

$array = $array | Select-Object -Unique    # The sorting one-liner

Write-Host $array
