# The hamming distance between two integers is the number of positions at which the corresponding bits are different.
hamming = lambda x,y: format(x^y, "032b").count('1')
