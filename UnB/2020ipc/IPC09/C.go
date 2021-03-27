package main

import (
    "fmt"
)

func main(){
    var N int
    var d []int

    fmt.Scan(&N)
    for i := 0; i < N; i++ {
        temp := 0
        fmt.Scan(&temp)
        d = append(d, temp)
    }

    // bubbleSort(d) // time limit exceeded

    min := 100000
    mini := 0
    for i := 0; i <= N/2; i++ {
        min = 100000
        for j := i; j < N; j++ {
            if d[j] < min {
                min = d[j]
                mini = j
            }
        }
        if min != 100000{
            temp := d[i]
            d[i] = min
            d[mini] = temp
            //fmt.Println(d)
        }
    }
    upMiddle := d[N/2]
    lowMiddle := d[N/2-1]

    fmt.Println(upMiddle-lowMiddle)
}

func swap(v []int, k int){
   temp:=v[k]
   v[k]=v[k+1]
   v[k+1]=temp
}

func bubbleSort(v []int){
    for i := range v {
        for j := i-1; j>=0 && v[j]>v[j+1]; j-- {
            swap(v,j)
        }
    }
}