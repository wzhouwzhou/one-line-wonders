# Compare two strings for similarity. Ratio closer to 1 = more similar
from difflib import SequenceMatcher; similar = lambda a, b: SequenceMatcher(None, a, b).ratio()
