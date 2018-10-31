phi = lambda n, val : 1+1/phi(n-1, val) if n >0 else 1
print(phi(int(input("enter a value")), 0))
