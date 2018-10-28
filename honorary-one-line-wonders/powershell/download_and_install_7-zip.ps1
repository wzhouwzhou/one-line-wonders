# This will only work on Windows 10 Version 1803 and newer, because curl.exe was not included with Windows before that.
# The same one-liner could be made to work on old Windows versions, but it would be longer.

$u='https://www.7-zip.org';-join (curl.exe $u -s) -match '[^"]*x64\.exe';curl.exe -O $u/$($matches.Values);& ($matches.Values -replace ".*/",".\") /S
