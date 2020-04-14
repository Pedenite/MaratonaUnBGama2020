package main

import (
	"fmt"
)

func main() {
	var A, B, C, K int
	fmt.Scanf("%d %d %d", &A, &B, &C)
	fmt.Scan(&K)

	if A > B && A > C {
		A *= 2*K
	} else if B > C {
		B *= 2*K
	} else {
		C *= 2*K
	}
	fmt.Println(A+B+C)
}
