package main
/*
go run bubblesort.go

One-liner bubblesort in go
*/
import "fmt"

func main(){
	test_array := []int{15, 3, 0, -40, 3, 3623450, 9, 9, 2, 86}
	oneLinerBubbleSort(&test_array)
	fmt.Println(test_array)
}

func oneLinerBubbleSort(a *[]int){
	for i := 0; i < (len(*a) * len(*a)); i++ { for j := 1; j < len(*a); j++ { if (*a)[j-1] > (*a)[j] { (*a)[j-1], (*a)[j] = (*a)[j], (*a)[j-1]}}}
}