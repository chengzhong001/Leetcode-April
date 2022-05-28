package main

import "fmt"

func countElements(arr []int) int{
    isFound := make([]bool, 1002)
    count := 0
    for _, v:= range arr{
        isFound[v] = true
    }
    
    for _, v := range arr{
        valPlus := v+1
        if isFound[valPlus]{
            count++
        }
    }
    return count
}

func main(){
    arr := []int {1, 2, 3}
    res := countElements(arr)
    fmt.Println(res)
    arr = []int {1, 1, 3, 3, 5, 5, 7, 7}
    res = countElements(arr)
    fmt.Println(res)
    arr = []int {1, 3, 2, 3, 5, 0}
    res = countElements(arr)
    fmt.Println(res)
   
}