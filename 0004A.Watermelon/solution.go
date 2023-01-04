package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

func Printf(format string, x ...interface{}) {
	fmt.Fprintf(writer, format, x...)
}

func Scanf(format string, x ...interface{}) {
	fmt.Fscanf(reader, format, x...)
}

func Solution() {
	var weight int
	Scanf("%d\n", &weight)

	if weight > 2 && weight%2 == 0 {
		Printf("YES\n")
	} else {
		Printf("No\n")
	}
}

func main() {
	Solution()
	writer.Flush()
}
