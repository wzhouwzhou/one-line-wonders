# Author: ngweihow https://github.com/ngweihow
find . -exec sh -c 'wc -m $0 2>/dev/null' {} \; | sort -n | grep -vwE "0 ." | head -1 | awk '{print "SHORTEST ONE LINER\ncharacters: "$1 "\nfile: "$2}'
