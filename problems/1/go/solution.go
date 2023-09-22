package main

import "fmt"

const (
	start  = 3
	finish = 1000
)

func main() {
	sum := 0

	for i := start; i < finish; i++ {
		if (i%3 == 0) || (i%5 == 0) {
			sum += i
		}
	}

	fmt.Println("Answer is: ", sum)
}
