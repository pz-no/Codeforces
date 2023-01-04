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
	var problemCount int
	Fscanf("%d\n", &problemCount)

	solvedCount := 0
	var petya, vasya, tonya int
	for problemIndex := 0; problemIndex < problemCount; problemIndex++ {
		Fscanf("%d %d %d\n", &petya, &vasya, &tonya)
		if petya+vasya+tonya >= 2 {
			solvedCount++
		}
	}

	Fprintf("%d\n", solvedCount)
}

func main() {
	Solution()
	writer.Flush()
}
