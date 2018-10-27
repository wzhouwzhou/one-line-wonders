fib = lambda n: n if n < 2 else fib(n-1) + fib(n-2)

# Testing
for i in range(13):
    print(fib(i), end=" ")
