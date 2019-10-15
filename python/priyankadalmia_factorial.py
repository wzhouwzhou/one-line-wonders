 # A factorial one-line function (Python)
fact = lambda n: [1,0][n>1] or fact(n-1)*n


# test it
print(fact(5))

# result - 120
