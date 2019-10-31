c="a"
while(c!=""):
    a=input("User-1: ").lower()
    b=input("User-2: ").lower()
    U=a
    V=b
    d_1={}
    d_2={}
    for i in a:
        if i not in d_1:
            d_1[i]=1
        else:
            d_1[i]+=1

    for i in b:
        if i not in d_2:
            d_2[i]=1
        else:
            d_2[i]+=1
    c=0
    for k,v in d_1.items():
        for i,j in d_2.items():
            if k==i:
                m=(j,v)
                s=min(m)
                c+=s+s            
    count=len(a)+len(b)-c
    print("\n")
    print("Total number of letters left in both the names after deleting the common letter in both the names is: ",count)
    print("\n")
    l=['F','L','A','M','E','S']
    d=0
    i=0
    a="FLAMES"
    #a=[x for x in string]
    c=count
    d=0
    i=0
    var_1=""
    print("Every letter is getting deleted after completion of count and again the process being started from next letter till it reaches to only one letter ! ")
    print("\n")
    if(count>0):
        while(len(a)!=1):
            for i in range(0,len(a)):
                d+=1
                if d==c:
                    print(a)
                    a=a[i+1:]+a[:i]
                    d=0
                    break
        var_1=a
    print(var_1)
    if var_1=='F':
        print(V+" is your Friend")
    elif var_1=='L':
        print(V+" is your LOVE")
    elif var_1=='A':
        print(V+" is your Attraction")
    elif var_1=='M':
        print(V+ " will marry you")
    elif var_1=='E':
        print(V+" is your Enemy")
    elif var_1=='S':
        print(V +" is your Sibling")
    elif count==0:
        print("No result found")
    print("Enter to exit or to run it once again enter any key !")
    c=input()






