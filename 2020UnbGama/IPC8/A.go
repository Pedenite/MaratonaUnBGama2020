package main

import (
    "fmt"
)

func main(){
    var n int
    m := 0
    c := 0
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        var vm, vc byte
        fmt.Scan(&vm, &vc)
        if vm > vc {
            m++
        } else if vc > vm {
            c++
        }
    }
    if m > c {
        fmt.Println("Mishka")
    } else if c > m {
        fmt.Println("Chris")
    } else {
        fmt.Println("Friendship is magic!^^")
    }
}
