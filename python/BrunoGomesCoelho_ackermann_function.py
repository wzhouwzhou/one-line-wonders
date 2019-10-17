ackermann = lambda m,n: n+1 if m == 0 else ackermann(m-1, 1) if (m > 0 and n == 0) else ackermann(m-1, ackermann(m, n-1))

print(ackermann(3, 3), "should be 61")

# To test, just change the below to True.
# Inputs and output taken from https://en.wikipedia.org/wiki/Ackermann_function
test = False
if test:
    # m = 0
    assert ackermann(0, 0) == 1
    assert ackermann(0, 1) == 2
    assert ackermann(0, 2) == 3
    assert ackermann(0, 3) == 4

    # m = 1
    assert ackermann(1, 0) == 2
    assert ackermann(1, 1) == 3
    assert ackermann(1, 2) == 4
    assert ackermann(1, 3) == 5
    
    # m = 2
    assert ackermann(2, 0) == 3
    assert ackermann(2, 1) == 5
    assert ackermann(2, 2) == 7
    assert ackermann(2, 3) == 9
    
    # m = 3
    assert ackermann(3, 0) == 5
    assert ackermann(3, 1) == 13
    assert ackermann(3, 2) == 29
    assert ackermann(3, 3) == 61
    assert ackermann(3, 4) == 125
    
    # m = 4
    assert ackermann(4, 0) == 13
    # From here on it reaches maximum recursion depth
