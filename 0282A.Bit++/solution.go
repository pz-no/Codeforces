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
	var cmdCount int
	Fscanf("%d\n", &cmdCount)

	sum := 0

	var cmd string
	for cmdIndex := 0; cmdIndex < cmdCount; cmdIndex++ {
		Fscanf("%s\n", &cmd)
		if cmd[0] == '+' || cmd[len(cmd)-1] == '+' {
			sum++
		} else {
			sum--
		}
	}

	Fprintf("%d\n", sum)
}

func main() {
	Solution()
	writer.Flush()
}
