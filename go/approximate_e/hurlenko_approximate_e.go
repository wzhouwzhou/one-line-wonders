package main
/*
Euler’s number approximation in go
*/
import "fmt"

func main(){
	e := 0.0
	eApprox(&e)
	fmt.Println(e)
}

func eApprox(e *float64) {for factorial, i := 1.0, 0; i < 10000;  *e, factorial, i = *e + 1 / factorial, factorial * float64(i) + 1.0, i + 1 {}}