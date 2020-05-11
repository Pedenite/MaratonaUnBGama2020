package main

import "fmt"

func main(){
	var n int
	fmt.Scan(&n)

	// var a, b []int
	tram := 0
	stop := 0
	for i := 0; i < n; i++ {
		var temp1, temp2 int
		fmt.Scan(&temp1, &temp2)
		// a = append(a, temp1)
		// b = append(b, temp2)
		
		stop = stop - temp1 + temp2
		if stop > tram {
			tram = stop
		}
	}

	fmt.Print(tram)
}