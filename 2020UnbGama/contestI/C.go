package main

import (
	"fmt"
)

func main(){
	var A, B int
	fmt.Scan(&A)
	fmt.Scan(&B)
	if A+B > 16 {
		panic("Exceeded pieces!")
	}
	if A > 8 || B > 8 {
		fmt.Println(":(")
	} else {
		fmt.Println("Yay!")
	}
}