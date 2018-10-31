#merge 2 sorted arrays
a = []
b = []
c=[]
i=0
j=0

n1=int(input("size of array A: "))
for i in range(n1):
	a.append(int(input("array element: ")))

n2=int(input("size of array B: "))
for i in range(n2):
	b.append(int(input("array element: ")))

i=0

while (i<len(a))and(j<len(b)):
	if(a[i]==b[j]):
		c.append(a[i])
		i+=1
		j+=1
	elif (a[i]<b[j]):
		c.append(a[i])
		i+=1
	elif (b[j]<a[i]):
		c.append(b[j])
		j+=1
while(i<len(a)):
	c.append(a[i])
	i=i+1
while(j<len(b)):
	c.append(b[j])
	j=j+1

print(c)
