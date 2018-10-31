
n=int(input())

a=1
b=0
while(n>0):
    print(a)
    temp=b
    b=a
    a=a+temp
    n=n-1
    
