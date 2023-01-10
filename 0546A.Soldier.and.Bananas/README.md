# 546A. Soldier and Bananas

## Constraints

  - Time limit per test: 1 second
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/546/A)

A soldier wants to buy $w$ bananas in the shop. He has to pay $k$ dollars for the first banana, $2k$ dollars for the second one and so on (in other words, he
has to pay $i \cdot k$ dollars for the $i$-th banana).

He has $n$ dollars. How many dollars does he have to borrow from his friend soldier to buy $w$ bananas?

## Input

The first line contains three positive integers $k$, $ n$, $ w$ $(1  \leq  k, w  \leq  1000, 0 \leq n \leq 10^9)$, the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

## Output

Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.

## Examples

### Input

[Link to file](input_0.txt)

```
3 17 4
```

### Output

[Link to file](expected_0.txt)

```
13
```

## Solutions

### Python 3.8.10

[Link to file](solution.py)

```python
def solution():
    k, n, w = [int(x) for x in input().split()]

    cost = k * (1 + w) * w // 2
    if cost > n:
        print(cost - n)
    else:
        print(0)


if __name__ == "__main__":
    solution()
```

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>


void solution() {
    int k, n, w;
    std::cin >> k >> n >> w;

    const int cost = k * (1 + w) * w / 2;
    if (cost > n) {
        std::cout << cost - n << '\n';
    } else {
        std::cout << 0 << '\n';
    }
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

func Fprintf(format string, x ...interface{}) {
	fmt.Fprintf(writer, format, x...)
}

func Fscanf(format string, x ...interface{}) {
	fmt.Fscanf(reader, format, x...)
}

func Solution() {
	var k, n, w int
	Fscanf("%d %d %d\n", &k, &n, &w)

	cost := k * (1 + w) * w / 2
	if cost > n {
		Fprintf("%d\n", cost-n)
	} else {
		Fprintf("0\n")
	}
}

func main() {
	Solution()
	writer.Flush()
}
```
