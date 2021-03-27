package main

import "fmt"

func main(){
	var n, m int
	var ns, ms []int
	fmt.Scan(&n, &m)
	min := 100
	minN := 100
	max := 0
	for i:=0; i < n; i++ {
		var temp int
		fmt.Scan(&temp)
		if temp > max {
			max = temp
		}
		if temp < minN {
			minN = temp
		}
		ns = append(ns, temp)
	}
	for i:=0; i < m; i++ {
		var temp int
		fmt.Scan(&temp)
		if temp < min {
			min = temp
		}
		ms = append(ms, temp)
	}
	v := 2*minN
	if max > v {
		v = max
	}
	if v >= min {
		fmt.Print(-1)
	} else {
		fmt.Print(v)
	}
}