t=int(input())
for i in range(t):
    x=0
    y=0
    N=int(input())
    def checkP(n):
        c=0
        
        for i in range(2,(n//2)+1):
            if(n%i==0):
                c+=1
                break;
        if (c!=0):
            return 0
        return 1
    
    def checkSP(n):
        x=0
        y=0
        a=[]
        
        for i in range(2,(n//2)+1):
            if(n%i==0):
                a.append(i)
        if (len(a)==2):
            x=checkP(a[0])
            y=checkP(a[1])
        if(x==1 and y==1):
            return 1
        return 0
    x=0
    y=0
     
    for i in range(6,(N//2)+1):
        c=i
        d=N-i
        x=checkSP(c)
        y=checkSP(d)
        if(x==1 and y==1):
            print("YES")
            break;
    if(x!=1 or y!=1):
        print("NO")
    
    
