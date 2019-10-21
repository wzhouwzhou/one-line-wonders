def getunique(arr):
    finallist=[]
    for i in arr:
        if(i not in finallist):
            finallist.append(i);
    return finallist

list1 = [10, 20, 10, 30, 40, 40] 
print(getunique(list1))


