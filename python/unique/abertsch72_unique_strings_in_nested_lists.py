seqs = [["a","b","c"],["a","d","e","f"],["y","a"],["a","a","a","a"], ["A"]]

print(len(set([name for seq in seqs for name in seq])))


assert (len(set([name for seq in seqs for name in seq])) == 8)