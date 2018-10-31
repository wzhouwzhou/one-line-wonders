class validAnagram:
    def isAnagram(self, s, t):
      return (sorted(s) == sorted(t))
