# 1A. Theatre Square

## Constraints

  - Time limit per test: 1 second
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/1/A)

Theatre Square in the capital city of Berland has a rectangular shape with the size $n \times m$ meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size $a \times a$.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

## Input

The input contains three positive integer numbers in the first line: $n$, $m$ and $a$ $(1 \leq n, m, a \leq 10^9)$.

## Output

Write the needed number of flagstones.

## Examples

### Input

[Link to file](input_0.txt)

```
6 6 4
```

### Output

[Link to file](expected_0.txt)

```
4
```

## Solutions

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>


void solution() {
    unsigned long long height, width, size;
    std::cin >> height >> width >> size;

    unsigned long long height_ratio = (height % size == 0) ? (height / size) : ((height / size) + 1);
    unsigned long long width_ratio = (width % size == 0) ? (width / size) : ((width / size) + 1);
    std::cout << height_ratio * width_ratio << '\n';
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
    height, width, size = [int(x) for x in input().split()]
    height_ratio = height // size if height % size == 0 else height // size + 1
    width_ratio = width // size if width % size == 0 else width // size + 1
    area = height_ratio * width_ratio
    print(f"{area}")


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
```
