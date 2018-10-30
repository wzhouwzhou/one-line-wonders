import random
x=100
print(sum([1/sum([sum([1 if random.randint(1,x)==1 else 0 for _ in range(x)])==0 for _ in range(x)]) for _ in range(x)]))
