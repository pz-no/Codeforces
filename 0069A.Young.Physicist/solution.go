package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

func Fprintf(format string, x ...interface{}) {
	fmt.Fprintf(writer, format, x...)
}

func Fscanf(format string, x ...interface{}) {
	fmt.Fscanf(reader, format, x...)
}

func Solution() {
	var caseCount int
	Fscanf("%d\n", &caseCount)

	var sumX, sumY, sumZ int
	var x, y, z int
	for caseIndex := 0; caseIndex < caseCount; caseIndex++ {
		Fscanf("%d %d %d\n", &x, &y, &z)
		sumX += x
		sumY += y
		sumZ += z
	}

	if sumX == 0 && sumY == 0 && sumZ == 0 {
		Fprintf("YES\n")
	} else {
		Fprintf("NO\n")
	}
}

func main() {
	Solution()
	writer.Flush()
}
