# solution to hackerrank question https://www.hackerrank.com/challenges/luck-balance/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=greedy-algorithms 
def luckBalance(k, contests):
	return reduce(lambda a, (i,b): a+b if i<len([x for x in contests if x[1]==0])+k else a-b, enumerate(map(lambda x: x[0], sorted(contests, key= lambda x: (10000 - (x[1] * x[0])) if x[1]*x[0] >0 else 0))), 0)

# test code
contests = [[5, 1], [2, 1], [1, 1], [8, 1], [10, 0], [5, 0]]
k = 3
print(luckBalance(k, contests))

# explanation code
# sort the constests such that all non important come first and then sort based on luck if important so that we can sum till allowed to lose and then subtract the sum of the rest
sortedContests = sorted(contests, key= lambda x: (10000 - (x[1] * x[0])) if x[1]*x[0] >0 else 0)
# Get only the first indices, ie luck values
LuckArray = map(lambda x: x[0], sortedContests)
# find number of lucks allowed in final array, it is the number of zero importance plus number of allowed failures
allowed = len([x for x in contests if x[1]==0])+k
# for each item in luck array, add to sum if it is before allowed index and remove from sum if it is after
print(reduce(lambda a, (i,b): a+b if i<allowed else a-b, enumerate(LuckArray), 0))