"""
Author: Ankur S (www.github.com/s-ankur)

TO use:
python xor_cipher.py <secret key>
<input your text>

Example:
Encrypt (Stored in ciphertext.bin)
python xor_cipher.py ankur > ciphertext.bin
Input: idontlikeapples

Decrypt
python xor_cipher.py ankur < ciphertex.bin
Output: idontlikeapples
"""

print(''.join(map(lambda x: chr(ord(x[0])^ord(x[1])),  zip(__import__('itertools').cycle(__import__('sys').argv[1]),input()))))
