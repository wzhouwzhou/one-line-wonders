# Rotate an array left, d times hackerrank question https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays 
def leftrotate(array, amount):	
	return array[amount:] + array[:amount]
# leftrotate = lambda array, amount: array[amount:] + array[:amount]
print(leftrotate([1,2,3,4,5], 3))
