list1 = [1,10,7,1,4]

[x for idx, x in enumerate(list1) if x not in list1[:idx]]
