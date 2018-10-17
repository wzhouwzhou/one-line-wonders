f = lambda x: [[y for j, y in enumerate(set(x)) if (i >> j) & 1] for i in range(2**len(set(x)))] # ;print(f([10,1,9,7,2])) example
