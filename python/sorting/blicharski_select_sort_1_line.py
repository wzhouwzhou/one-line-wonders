def select_sort(a):
	return [a.pop(a.index(min(a))) for _ in range(len(a))]



## TEST
test = [5, -1, 2, 4, 0]
test_sorted = sorted(test)
test_select_sort = select_sort(test[:])


print(test)
print(test_sorted)
print(test_select_sort)

for i in range(len(test)):
	assert test_sorted[i] == test_select_sort[i]
