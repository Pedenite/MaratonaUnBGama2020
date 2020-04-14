package main

import (
	"fmt"
	"math"
)

func main() {
	var A, B, C int
	var K float64
	fmt.Scanf("%d %d %d", &A, &B, &C)
	fmt.Scan(&K)

	if A > B && A > C {
		A *= int(math.Pow(2, K))
	} else if B > C {
		B *= int(math.Pow(2, K))
	} else {
		C *= int(math.Pow(2, K))
	}
	fmt.Println(A+B+C)
}
