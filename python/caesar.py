import sys
print(''.join(map((lambda x: chr((ord(x)+int(sys.argv[1])-97)%26+97)),sys.argv[2])))
