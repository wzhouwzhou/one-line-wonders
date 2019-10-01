fib = lambda n,a=1,b=1:[b,0][n>0] or fib(n-1,b,a+b) #returns the n-th fibonacci number, or 1 if n <= 0
