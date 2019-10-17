print "\n".join(["\t".join(["%d"%(lambda f,a,b:f(f,a)/(f(f,a-b)*f(f,b)))(lambda f,i: 1 if i <= 0 else i*f(f,i-1),n,r)for r in range(n+1)])for n in range(int(__import__('sys').argv[1]))])
