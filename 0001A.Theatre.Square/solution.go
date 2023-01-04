package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

func Printf(f string, a ...interface{}) {
	fmt.Fprintf(writer, f, a...)
}

func Scanf(f string, a ...interface{}) {
	fmt.Fscanf(reader, f, a...)
}

func Solution() {
	var height, width, size uint64
	Scanf("%d %d %d\n", &height, &width, &size)

	var heightRatio uint64
	if height%size == 0 {
		heightRatio = height / size
	} else {
		heightRatio = height/size + 1
	}

	var widthRatio uint64
	if width%size == 0 {
		widthRatio = width / size
	} else {
		widthRatio = width/size + 1
	}

	Printf("%d\n", heightRatio*widthRatio)
}

func main() {
	Solution()
	writer.Flush()
}
