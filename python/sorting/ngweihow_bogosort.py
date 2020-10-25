'''
Bogosort created using lambda.

@author: ngweihow (github.com/ngweihow)
'''
from random import sample

b_sort = lambda ls: ls if all(ls[i] <= ls[i+1] for i in range(len(ls)-1)) else b_sort(sample(ls, len(ls)))

# Tests (PLEASE DO NOT TEST WITH LARGE LIST INPUT, BOGOSORT IS HIGHLY INEFFICIENT)
print(b_sort([4,3,2,1]))