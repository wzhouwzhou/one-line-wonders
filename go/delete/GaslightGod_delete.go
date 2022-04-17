package main
/*
go run remove_element.go
One-liner element deletion in go
*/

import "fmt"

func main() {
    testArr := []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
    fmt.Println(d2(testArr, 3)) // Removes 4
}

func d2 (s []int, x int) []int { return s[:x+copy(s[x:], s[x+1:])] }
