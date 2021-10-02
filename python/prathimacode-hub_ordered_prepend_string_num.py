#Consider the program that takes in a string and a list of numbers. 
#It will prepend the string to each of the numbers and return a string of this new list separated by commas. 
#For example, foo('$', range(5)) would return '$0, $1, $2, $3, $4'. 
#A naive coder will do this-
#
#def foo(string, numbers):
#  output = ''
#  for i in range(len(numbers)):
#    if i > 0:
#      output += ', '
#    output += string + str(numbers[i])
#  return output
#
# Here is an elegant way with Output $0, $1, $2, $3, $4-

def foo(string, numbers): return ', '.join(map(lambda s,n:s+str(n), [string for i in numbers], numbers))
