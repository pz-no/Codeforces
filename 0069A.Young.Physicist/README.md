# 69A. Young Physicist

## Constraints

  - Time limit per test: 2 seconds
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/69/A)

A guy named Vasya attends the final grade of a high school. One day Vasya decided to watch a match of his favorite hockey team. And, as the boy loves hockey very much, even more than physics, he forgot to do the homework. Specifically, he forgot to complete his physics tasks. Next day the teacher got very angry at Vasya and decided to teach him a lesson. He gave the lazy student a seemingly easy task: You are given an idle body in space and the forces that affect it. The body can be considered as a material point with coordinates (0; 0; 0). Vasya had only to answer whether it is in equilibrium. "Piece of cake" — thought Vasya, we need only to check if the sum of all vectors is equal to 0. So, Vasya began to solve the problem. But later it turned out that there can be lots and lots of these forces, and Vasya can not cope without your help. Help him. Write a program that determines whether a body is idle or is moving by the given vectors of forces.

## Input

The first line contains a positive integer $n$ $(1 \leq n \leq 100)$, then follow $n$ lines containing three integers each: the $x_i$ coordinate, the $y_i$ coordinate and the $z_i$ coordinate of the force vector, applied to the body $( - 100 \leq x_i, y_i, z_i \leq 100)$.

## Output

Print the word "YES" if the body is in equilibrium, or the word "NO" if it is not.

## Examples

### Input

[Link to file](input_0.txt)

```
3
4 1 7
-2 4 -1
1 -5 -3
```

### Output

[Link to file](expected_0.txt)

```
NO
```

### Input

[Link to file](input_1.txt)

```
3
3 -1 7
-5 2 -4
2 -1 -3
```

### Output

[Link to file](expected_1.txt)

```
YES
```

## Solutions

### Python 3.8.10

[Link to file](solution.py)

```python
def solution():
    case_count = int(input())

    sum_x, sum_y, sum_z = 0, 0, 0
    for _ in range(case_count):
        x, y, z = [int(x) for x in input().split()]
        sum_x += x
        sum_y += y
        sum_z += z

    if sum_x == 0 and sum_y == 0 and sum_z == 0:
        print("YES")
    else:
        print("NO")


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

func Fprintf(format string, x ...interface{}) {
	fmt.Fprintf(writer, format, x...)
}

func Fscanf(format string, x ...interface{}) {
	fmt.Fscanf(reader, format, x...)
}

func Solution() {
	var caseCount int
	Fscanf("%d\n", &caseCount)

	var sumX, sumY, sumZ int
	var x, y, z int
	for caseIndex := 0; caseIndex < caseCount; caseIndex++ {
		Fscanf("%d %d %d\n", &x, &y, &z)
		sumX += x
		sumY += y
		sumZ += z
	}

	if sumX == 0 && sumY == 0 && sumZ == 0 {
		Fprintf("YES\n")
	} else {
		Fprintf("NO\n")
	}
}

func main() {
	Solution()
	writer.Flush()
}
```

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>


void solution() {
    int case_count;
    std::cin >> case_count;

    int x, y, z, sum_x = 0, sum_y = 0, sum_z = 0;
    for (int case_index = 0; case_index < case_count; ++case_index) {
        std::cin >> x >> y >> z;

        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
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
