from math import pi
print('\ne^pi ~ ', sum([pow(pi, n)/(lambda a, b: a(a, b))(lambda a, b: b*a(a, b-1) if b > 0 else 1, n) for n in range(int(input('Enter reasonable sized number (>10): ')))]) )
