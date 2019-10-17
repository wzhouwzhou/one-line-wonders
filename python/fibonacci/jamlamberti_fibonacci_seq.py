print "\n".join(map(str,[(lambda f,n: f(f,n))(lambda g,a:a if a<2 else g(g,a-1)+g(g,a-2),n)for n in range(1,1+int(__import__('sys').argv[1]))]))
