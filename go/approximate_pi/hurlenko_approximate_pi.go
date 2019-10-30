package main

/*
Euler’s number approximation in go
*/
import "fmt"

func main() {
	fmt.Println(piApprox(1000000)) // number of iterations
}

func piApprox(args... float64) float64 {if  iters := args[0]; iters != -1 { return func() float64 { if len(args) == 1 {return piApprox(2 * iters - 1, 0)} else {return piApprox(iters - 2, args[1] + float64(-(int64(iters) % 4 - 2)) / float64(iters))}}()} else {return args[1] * 4.0}}

