def uni(arr):
        li=[]
        [li.append(i) for i in arr if not li.count(i)]
        return li

list1 = [10, 20, 10, 30, 40, 40] 
print(getunique(list1))


