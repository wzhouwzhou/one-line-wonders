package main

import (
  "fmt"
)

func main() {
  fmt.Println(fib(10))
}

func fib(n float64) float64 {if n < 2 { return n } else {return fib(n-1) + fib(n-2)}}