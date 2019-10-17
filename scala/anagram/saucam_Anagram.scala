object Anagram {
  def isAnagram(s: String, t: String): Boolean = s.groupBy(identity) == t.groupBy(identity)
}
