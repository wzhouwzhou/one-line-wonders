def caesar_encode(s, k, pool='ABCDEFGHIJKLMNOPQRSTUVWXYZ'): return s.translate(str.maketrans(pool, pool[k:]+pool[:k]))
def caesar_decode(s, k, pool='ABCDEFGHIJKLMNOPQRSTUVWXYZ'): return s.translate(str.maketrans(pool, pool[-k:]+pool[:-k]))

print(caesar_encode('HELLO', 3))
print(caesar_decode('KHOOR', 3))