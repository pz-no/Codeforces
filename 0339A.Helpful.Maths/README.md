# 339A. Helpful Maths

## Constraints

  - Time limit per test: 2 seconds
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/339/A)

Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

## Input

The first line contains a non-empty string $s$ — the sum Xenia needs to count. String $s$ contains no spaces. It only contains digits and characters "+". Besides, string $s$ is a correct sum of numbers 1, 2 and 3. String $s$ is at most 100 characters long.

## Output

Print the new sum that Xenia can count.

## Examples

### Input

[Link to file](input_0.txt)

```
3+2+1
```

### Output

[Link to file](expected_0.txt)

```
1+2+3
```

### Input

[Link to file](input_1.txt)

```
1+1+3+1+3
```

### Output

[Link to file](expected_1.txt)

```
1+1+1+3+3
```

### Input

[Link to file](input_2.txt)

```
2
```

### Output

[Link to file](expected_2.txt)

```
2
```

## Solutions

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>
#include <string>


void solution() {
    std::string line;
    std::getline(std::cin, line);

    int counts[3] = {0, 0, 0};
    for (const char c: line) {
        if (c != '+') {
            counts[int(c - '0') - 1] += 1;
        }
    }

    bool is_first = true;
    for (int i = 0; i < 3; ++i) {
        for (int count = 0; count < counts[i]; ++count) {
            if (is_first) {
                is_first = false;
            } else {
                std::cout << '+';
            }

            std::cout << i + 1;
        }
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
    line = input()

    counts = [0, 0, 0]
    for c in line:
        if c != "+":
            counts[int(c) - 1] += 1

    is_first = True
    for i in range(3):
        for count in range(counts[i]):
            if is_first:
                is_first = False
            else:
                print("+", end="")
            print(i + 1, end="")
    print("")


if __name__ == "__main__":
    solution()
```
