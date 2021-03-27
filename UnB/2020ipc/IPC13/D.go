package main

import "fmt"

func main()
{
    var n, m int
    var l1, r1, l2, r2 []int

    fmt.Scan(&n)

    for i:=0; i < n; i++ {
        var temp1 int
        var temp2 int
        fmt.Scan(&temp1, &temp2)
        l1 = append(l1, temp1)
        r1 = append(r1, temp2)
    }

    fmt.Scan(&m)

    for i:=0; i < m; i++ {
        var temp1, temp2 int
        fmt.Scan(&temp1, temp2)
        l2 = append(l2, temp1)
        r2 = append(r2, temp2)
    }

    // for i:=0; i < n; i++ {   DESCARTADO POR SER MUITO LENTO. PENSAR EM FORMA MELHOR DEPOIS
    //     for j:=0; j < m; j++ {
            
    //     }
    // }
}
