# Generates a random strong 20 chars long password.
# If you want to change the length of the password you can cange 20 inside the brackets before the -join to somethin else.
([char[]]([char]33..[char]95) + ([char[]]([char]97..[char]126)) + 0..9 | Sort-Object {Get-Random})[0..20] -join ''
