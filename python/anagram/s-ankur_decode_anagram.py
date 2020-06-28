"""
To Use
python3.6 decode_anagram.py
Input: ilne
Output: line

Input: loev
Output: love

Requirements:
Python3.6
requests package
internet connection

Beware:
Since it queries wikitionary many times, its speed is very low.
Moreover, the time complexity is Factorial so if len(word) > 6,
it is unlikely to answer today
It may or may not be pep8 compliant

"""

print(''.join(max(__import__('itertools').permutations(input()),key=lambda x:getattr(__import__('requests').get(f"http://en.wiktionary.org/w/api.php?action=query&titles={''.join(x)}&prop=pageviews&pvipdays=1&format=json").json()['query']['pages'].values().__iter__().__next__()['pageviews'].values().__iter__().__next__(),'real',-1)))) 
