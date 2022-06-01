package main

import (
	"fmt"
	"strings"
)

func process(s string) string {
	result := []string{}
	for _, v := range s {
		if v == '#' {
			if len(result) > 0 {
				result = result[:len(result)-1]
			}
		} else {
			result = append(result, string(v))
		}
	}
	return strings.Join(result, "")
}

func backspaceCompare(s string, t string) bool {
	return process(s) == process(t)
}

func main() {
	result := []string  {"a", "b", "c", "d", "e"}
	result = result[0:2]

	S := "ab#c"
	T := "ad#c"

	fmt.Println(backspaceCompare(S, T))
	
}
