package main

/*
Euler’s number approximation in go
*/
import "fmt"

func main() {
	fmt.Println(piApprox())
}

func piApprox() (pi float64) {for k := 1.0; k < 2*200000+1; k = k + 2 { pi = pi + float64(-(int64(k)%4-2))/float64(k)}; return pi * 4}
