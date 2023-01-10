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
	var k, n, w int
	Fscanf("%d %d %d\n", &k, &n, &w)

	cost := k * (1 + w) * w / 2
	if cost > n {
		Fprintf("%d\n", cost-n)
	} else {
		Fprintf("0\n")
	}
}

func main() {
	Solution()
	writer.Flush()
}
