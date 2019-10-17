from collections import Counter
c = Counter(str(input('enter a word: ')).lower())
print({v: c[v] for v in 'aeiou' if v in c})
