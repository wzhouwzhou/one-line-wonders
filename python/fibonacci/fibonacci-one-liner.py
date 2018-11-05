from functools import reduce; print(reduce(lambda x, y: (x[1], x[0] + x[1]), [None for i in range(int(input()))], (0, 1))[0])
