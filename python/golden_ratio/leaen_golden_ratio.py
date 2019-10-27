print('phi ~ %2f' % (lambda a: lambda v: a(a, v))(lambda s,n,x=1: s(s,n-1,1+1/x) if n>0 else x)(int(input('Enter large number: '))))
