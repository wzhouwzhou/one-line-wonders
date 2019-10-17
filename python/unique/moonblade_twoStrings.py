# solution to python problem https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
twoStrings = lambda s1, s2: "YES" if any(set(s1)&set(s2)) else "NO"

assert(twoStrings("hello", "world")) == "YES"
assert(twoStrings("hello", "wrd")) == "NO"