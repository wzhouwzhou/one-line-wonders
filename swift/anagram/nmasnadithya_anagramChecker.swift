import Foundation

// Swift 4
func check(_ a: String, _ b: String) -> Bool {
    return a.lowercased().sorted() == b.lowercased().sorted()
}
print(check("anagram","nagaram"))
print(check("rat","car"))
