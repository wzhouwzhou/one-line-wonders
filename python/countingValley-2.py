count_valleys = lambda s: [sum([1 if x == 'U' else -1 for x in s[:e]]) for e in range(1, len(s))].count(0)

assert count_valleys('UDDDUDUU') == 1
assert count_valleys('UUDDDUDDUU') == 2

