# This will only work on Windows 10 Version 1803 and newer, because curl.exe was not included with Windows before that.
# The same one-liner could be made to work on old Windows versions, but it would be longer.
# Also, this is super-janky (redirecting curls stderr to grab the filename) and only for fun.

& ".\$([regex]::Match(-join (curl.exe -O ('https://www.7-zip.org/{0}' -f [regex]::Match(-join (curl.exe 'https://www.7-zip.org' -s), '[^"]*x64\.exe').Value) -v 2>&1), '[^/]*x64\.exe').Value)" /S