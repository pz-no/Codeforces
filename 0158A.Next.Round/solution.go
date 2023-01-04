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
	var participantCount, candidateCount int
	Scanf("%d %d\n", &participantCount, &candidateCount)

	scores := make([]int, participantCount)
	for partitipantIndex := 0; partitipantIndex < participantCount; partitipantIndex++ {
		Scanf("%d", &scores[partitipantIndex])
	}

	participantIndex := candidateCount - 1
	threshold := scores[participantIndex]
	if scores[participantIndex] > 0 {
		for participantIndex < participantCount && scores[participantIndex] == threshold {
			participantIndex++
		}
	} else {
		for participantIndex >= 0 && scores[participantIndex] == 0 {
			participantIndex--
		}
		participantIndex++
	}

	Printf("%d\n", participantIndex)
}

func main() {
	Solution()
	writer.Flush()
}
