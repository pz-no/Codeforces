# 282A. Bit++

## Constraints

  - Time limit per test: 1 second
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/282/A)

The classic programming language of Bitland is Bit++. This language is so peculiar and complicated.

The language is that peculiar as it has exactly one variable, called x. Also, there are two operations:

Operation ++ increases the value of variable $x$ by 1.
Operation -- decreases the value of variable $x$ by 1.

A statement in language Bit++ is a sequence, consisting of exactly one operation and one variable $x$. The statement is written without spaces, that is, it can only contain characters "+", "-", "X". Executing a statement means applying the operation it contains.

A programme in Bit++ is a sequence of statements, each of them needs to be executed. Executing a programme means executing all the statements it contains.

You're given a programme in language Bit++. The initial value of $x$ is 0. Execute the programme and find its final value (the value of the variable when this programme is executed).

## Input

The first line contains a single integer $n (1 \leq n \leq 150)$ — the number of statements in the programme.

Next $n$ lines contain a statement each. Each statement contains exactly one operation (++ or --) and exactly one variable $x$ (denoted as letter «X»). Thus, there are no empty statements. The operation and the variable can be written in any order.

## Output

Print a single integer — the final value of $x$.

## Examples

### Input

[Link to file](input_0.txt)

```
1
++X
```

### Output

[Link to file](expected_0.txt)

```
1
```

### Input

[Link to file](input_1.txt)

```
2
X++
--X
```

### Output

[Link to file](expected_1.txt)

```
0
```

## Solutions

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>
#include <string>


void solution() {
    int cmd_count = 0;
    std::cin >> cmd_count;

    std::string cmd;
    int sum = 0;
    for (int cmd_index = 0; cmd_index < cmd_count; ++cmd_index) {
        std::cin >> cmd;
        sum += (*cmd.begin() == '+' || *cmd.rbegin() == '+') ? 1 : -1;
    }

    std::cout << sum << '\n';
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
    cmd_count = int(input())

    sum = 0
    for _ in range(cmd_count):
        cmd = input()
        if cmd[0] == '+' or cmd[-1] == '+':
            sum += 1
        else:
            sum -= 1

    print(sum)


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
```
