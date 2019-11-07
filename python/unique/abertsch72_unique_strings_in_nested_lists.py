seqs = [["a","b","c"],["a","d","e","f"],["y","a"],["a","a","a","a"], ["A"]]

print(len(set([name for seq in seqs for name in seq])))

# Testing
testseqs = [["a","b","c"],["a","d","e","f"],["y","a"],["a","a","a","a"], ["A"]]
assert (len(set([name for seq in testseqs for name in seq])) == 8)
