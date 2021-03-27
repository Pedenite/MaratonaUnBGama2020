package main

import "fmt"

func main(){
	var n, m, vasya, petya int
	var a, b []int

	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		temp := 0
		fmt.Scan(&temp)
		a = append(a, temp)
	}

	fmt.Scan(&m)
	for i := 0; i < m; i++ {
		temp := 0
		fmt.Scan(&temp)
		b = append(b, temp)
	}

	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			vasya++
			if a[j] == b[i]{
				break
			}
		}
	}

	for i := 0; i < m; i++ {
		for j := n-1; j >= 0; j-- {
			petya++
			if a[j] == b[i]{
				break
			}
		}
	}

	fmt.Println(vasya, petya)
}