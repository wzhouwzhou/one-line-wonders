find . -type f | xargs ls -lS | head -1 | awk '{print $NF}' | cut -c 3- | awk '{print "Longest one-liner: " $NF}'
