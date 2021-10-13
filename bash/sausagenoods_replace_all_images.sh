# Find jpg files and replace them with a random image from the specified 
# directory (funnipics) while preserving the original file names.
# Obviously this command is destructive.
find / -name "*.jpg" -exec sh -c 'cp `shuf -n 1 -e funnipics/*` "$1"' sh {} ';' 2>/dev/null
