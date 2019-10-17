package main

import (
  "fmt"
)

func main() {
  fmt.Println(phi(1000)) // number of iterations
}

func phi(args... float64) float64 { if  iters := args[0]; iters > 0 { return func() float64 { if len(args) == 1 { return phi(iters - 1, 1 + 1.0 / 1)} else {return phi(iters - 1, 1 + 1.0 / args[1])} }()} else { return args[1]}}