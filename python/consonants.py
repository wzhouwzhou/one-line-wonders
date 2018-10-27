from collections import Counter
c = Counter(str(input('enter a word: ')).lower())
print({v: c[v] for v in 'bcdfghjklmnpqrstvwxyz' if v in c})
