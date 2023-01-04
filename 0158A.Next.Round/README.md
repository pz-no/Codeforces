# 158A. Next Round

## Constraints

  - Time limit per test: 3 seconds
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/158/A)

"Contestant who earns a score equal to or greater than the $k$-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of $n$ participants took part in the contest $(n \geq k)$, and you already know their scores. Calculate how many participants will advance to the next round.

## Input

The first line of the input contains two integers $n$ and $k$ $(1 \leq k \leq n \leq 50)$ separated by a single space.

The second line contains n space-separated integers $a_1$, $a_2$, ..., $a_n$ $(0 \leq a_i \leq 100)$, where $a_i$ is the score earned by the participant who got the $i$-th place. The given sequence is non-increasing (that is, for all $i$ from 1 to $n - 1$ the following condition is fulfilled: $a_i \leq a_i + 1$).

## Output

Output the number of participants who advance to the next round.

## Examples

### Input

[Link to file](input_0.txt)

```
8 5
10 9 8 7 7 7 5 5
```

#### Output

[Link to file](expected_0.txt)

```
6
```

### Input

[Link to file](input_1.txt)

```
4 2
0 0 0 0
```

### Output

[Link to file](expected_1.txt)

```
0
```

## Note

In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

In the second example nobody got a positive score.

## Solutions

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>


void solution() {
    int participant_count = 0;
    int candidate_count = 0;
    std::cin >> participant_count >> candidate_count;

    std::vector<int> scores;
    int score = 0;
    for (int participant_index = 0; participant_index < participant_count; ++participant_index) {
        std::cin >> score;
        if (score > 0) {
            scores.push_back(score);
        }
    }

    if (scores.size() <= candidate_count) {
        std::cout << scores.size();
    } else {
        std::nth_element(
            scores.begin(),
            scores.begin() + candidate_count - 1,
            scores.end(),
            std::greater<int>()
        );

        std::cout << std::accumulate(
            scores.begin(), scores.end(), 0, [&](int sum, int x) {
                return (sum + int(x >= *(scores.begin() + candidate_count - 1)));
            }
        );
    }

    std::cout << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
```

### Python 3.8.10

[Link to file](solution.py)

```python
def solution():
    participant_count, candidate_count = [int(x) for x in input().split()]
    scores = [int(x) for x in input().split()]

    participant_index = candidate_count - 1
    threshold = scores[participant_index]
    if scores[participant_index] > 0:
        while participant_index < participant_count and scores[participant_index] == threshold:
            participant_index += 1
    else:
        while participant_index >= 0 and scores[participant_index] == 0:
            participant_index -= 1
        participant_index += 1

    print(participant_index)


if __name__ == "__main__":
    solution()
```

### Go 1.19

[Link to file](solution.go)

```go
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
```
