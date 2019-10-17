sort = lambda l : l if len(l)<=1 else sort([x for x in l[1:] if x < l[0]]) + [l[0]] + sort([x for x in l[1:] if x >= l[0]])
print(sort([1,2,5,6,7,8]))
