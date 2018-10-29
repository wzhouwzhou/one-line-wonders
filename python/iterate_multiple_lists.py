from itertools import chain;
x=[1,2]; y=['a','s','d']; z=['<','>','/'];
for item in chain(x,y,z):
	print (item)
