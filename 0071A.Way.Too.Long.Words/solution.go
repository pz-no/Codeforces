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
	var caseCount int
	Scanf("%d\n", &caseCount)

	var word string
	for caseIndex := 0; caseIndex < caseCount; caseIndex++ {
		Scanf("%s\n", &word)
		if len(word) <= 10 {
			Printf("%s\n", word)
		} else {
			Printf("%c%d%c\n", word[0], len(word)-2, word[len(word)-1])
		}
	}
}

func main() {
	Solution()
	writer.Flush()
}
