
"""
Author: Ankur Sonawane (https://github.com/s-ankur)

To use: `python caesar.py <n shifts> <string>` 
python caesar.py 1 abcz
>>> bcda
python caesar.py -3 ankur
>>> xkhro
python caesar.py xkhro
>>> ankur
"""

import sys
print(''.join(map((lambda x: chr((ord(x)+int(sys.argv[1])-97)%26+97)),sys.argv[2])))
