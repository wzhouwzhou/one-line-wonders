find . -type f | xargs ls -lS | head -1 | awk '{print "LONGEST ONE LINER\ncharacters: " $5 "\nfile: "  $NF}'
