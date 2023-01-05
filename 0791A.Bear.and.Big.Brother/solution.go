package main

import (
	"bufio"
	"fmt"
	"math"
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
	var limak, bob float64
	Fscanf("%f %f\n", &limak, &bob)

	result := (math.Log(bob) - math.Log(limak)) / (math.Log(3) - math.Log(2))
	if result == float64(int(result)) {
		result++
	} else {
		result = float64(int(result) + 1)
	}

	Fprintf("%d\n", int(result))
}

func main() {
	Solution()
	writer.Flush()
}
