# To run, use use python3 dot_product.py 1,2,3 1,2,3
import sys
print(sum(x*y for x, y in zip(list(map(int, sys.argv[1].split(","))), list(map(int, sys.argv[2].split(","))))))
