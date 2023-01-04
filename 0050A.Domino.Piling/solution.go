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
	var height, width int
	Scanf("%d %d\n", &height, &width)

	half_height := height / 2
	half_width := width / 2

	var result int = 2 * half_height * half_width
	if (height%2 == 1) && (width%2 == 1) {
		result += half_height + half_width
	} else if (height%2 == 1) && (width%2 == 0) {
		result += half_width
	} else if (height%2 == 0) && (width%2 == 1) {
		result += half_height
	}

	Printf("%d\n", result)
}

func main() {
	Solution()
	writer.Flush()
}
