fact = lambda x: 1 if x == 0 else x * fact(x-1)
#testing it
print(fact(25))