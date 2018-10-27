# This is a mixture of matrix transpose and dot product multiplication.
matrix1 = [[1,2,3], [4,5,6], [7,8,9]]
matrix2 = [[1,2,3,4,5], [4,5,6,4,5], [7,8,9,4,5]]

print(*[[sum(x*y for x, y in zip(a, b)) for b in [list(i) for i in zip(*matrix2)]] for a in matrix1], sep="\n")


# To test, just change the line below to True
test = False
if test:
    try:
        import numpy as np
        a = np.matrix(matrix1)
        b = np.matrix(matrix2)
        print("The result should be:")
        print(a*b)
    except:
        print("Numpy required!")
