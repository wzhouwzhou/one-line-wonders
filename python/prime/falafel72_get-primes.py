import sys

primes = lambda n: sorted(set(i for i in range(2,n)).difference(set(j for p in range(2,n) for j in range(2,n) if j != p and j%p == 0)))

if __name__ == '__main__':
    arg = int(sys.argv[1])
    print(primes(arg))
