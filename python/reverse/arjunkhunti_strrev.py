"""
python3 has reversed() funtion which returns an iterator
that accesses the given sequence in the reverse order

more details: https://docs.python.org/3/library/functions.html#reversed
"""

# Reverse string
TEST_STR = "I love Hacktoberfest"
print(f"Reversed String : {''.join(reversed(TEST_STR))}")

# Reverse List
TEST_LIST = ["I", "love", "Hacktoberfest"]
print(f"Reversed List : {list(reversed(TEST_LIST))}")

# Reverse Tuple
TEST_TUPLE = ("I", "love", "Hacktoberfest")
print(f"Reversed Tuple : {tuple(reversed(TEST_TUPLE))}")
