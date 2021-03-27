package main

import (
	"fmt"
)

func main() {
	var t, n, res int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&n)
		if n&1 != 0 {
			res = int(n / 2)
		} else {
			res = n/2 - 1
		}

		fmt.Println(res)
	}
}
