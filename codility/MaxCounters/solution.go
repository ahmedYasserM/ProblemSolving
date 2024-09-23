// Go version: go1.23.1

package main

import "fmt"

func Solution(N int, A []int) []int {
	counters := make([]int, N)
	m := 0
	b := 0

	for _, v := range A {
		if v <= N {
			counters[v-1] = max(b, counters[v-1]) + 1
			m = max(m, counters[v-1])
		} else {
			b = m
		}
	}

	for i, v := range counters {
		if v < b {
			counters[i] = b
		}
	}

	return counters
}

func main() {
	fmt.Println(Solution(5, []int{3, 4, 4, 6, 1, 4, 4}))
}
