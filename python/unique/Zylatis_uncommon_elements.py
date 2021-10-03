# Given two lists, find elements not present in both 
# Effectively, a join + delete duplicates. Conversion to set means it nukes repeated elements
s1 = [1,9,23,4]
s2 = [1,4,8,3,7]

# XOR operation on sets
print(set(s1) ^ set(s2))
