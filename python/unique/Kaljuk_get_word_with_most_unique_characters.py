# Return the word with most unique characters from the inserted array of words
getUniqueWord = lambda ws: None if (not ws) else max(ws, key=lambda w: None if (not w) else len(set(w)))

# Example
getUniqueWord(["Summer", "Bananananana", None, "WhATisThIsHmm"])

