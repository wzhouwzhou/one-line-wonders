# To run, just use "python3 fizzbuzz.py <NUMBER>"
import sys
print(*["fizzbuzz" if x % 15 == 0 else "fizz" if x % 3 == 0 else "buzz" if x % 5 == 0 else x for x in range(1, int(sys.argv[1])+1)], sep="  ")
