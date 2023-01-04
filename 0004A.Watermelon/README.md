# 4A. Watermelon

## Constraints

  - Time limit per test: 1 second
  - Memory limit per test: 64 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/4/A)

One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed $w$ kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

## Input

The first (and the only) input line contains integer number $w (1 \leq w \leq 100)$ — the weight of the watermelon bought by the boys.

## Output

Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

## Examples

### Input

[Link to data file](input_0.txt)

```
8
```

### Output

[Link to data file](expected_0.txt)

```
YES
```

## Note

For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).

## Solutions

[Link to source code](solution.py)

### Python 3.8.10

```python
def solution():
    weight = int(input())
    result = "YES" if weight > 2 and weight % 2 == 0 else "NO"
    print(result)


if __name__ == "__main__":
    solution()
```

### GNU C++17 7.3.0

[Link to source code](solution.cpp)

```cpp
#include <iostream>


void solution() {
    int weight = 0;
    std::cin >> weight;
    std::cout << ((weight > 2 && weight % 2 == 0) ? "YES" : "NO") << '\n';
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

### Go 1.19

[Link to source code](solution.go)

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
```
