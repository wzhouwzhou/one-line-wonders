package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Println(isPalindrome("Natetan is I si Natetan"))
}

func isPalindrome(text string) bool{ return strings.ToLower(text) == Reverse(strings.ToLower(text)) }

func Reverse(s string) string {
    r := []rune(s) 
    for i, j := 0, len(r)-1; i < len(r)/2; i, j = i+1, j-1 { r[i], r[j] = r[j], r[i] }  
    return string(r)
}