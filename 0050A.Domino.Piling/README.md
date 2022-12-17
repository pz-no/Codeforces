# 50A. Domino piling

## Constratints

  - Time limit per test: 2 seconds
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/50/A)

You are given a rectangular board of $M \times N$ squares. Also you are given an unlimited number of standard domino pieces of $2 \times 1$ squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

  1. Each domino completely covers two squares.
  2. No two dominoes overlap.
  3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.

## Input

In a single line you are given two integers $M$ and $N$ — board sizes in squares ($1 \leq M \leq N \leq 16$).

## Output

Output one number — the maximal number of dominoes, which can be placed.

## Examples

### Input

[Link to file](input_0.txt)

```
2 4
```

### Output

[Link to file](expected_0.txt)

```
4
```

### Input

[Link to file](input_1.txt)

```
3 3
```

### Output

[Link to file](expected_1.txt)

```
4
```

## Solutions

### Python 3.8.10

[Link to file](solution.py)

```python
def solution():
    height, width = [int(x) for x in input().split()]

    half_height = height // 2
    half_width = width // 2

    result = 2 * half_height * half_width
    if height % 2 == 1 and width % 2 == 1:
        result += half_height + half_width

    elif height % 2 == 1 and width % 2 == 0:
        result += half_width

    elif height % 2 == 0 and width % 2 == 1:
        result += half_height

    print(result)


if __name__ == "__main__":
    solution()
```

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>


void solution() {
    int height, width;
    std::cin >> height >> width;

    int half_height = height / 2;
    int half_width = width / 2;
    int result = 2 * half_height * half_width;
    if ((height % 2 == 1) && (width % 2 == 1)) {
        result += half_height + half_width;
    } else if ((height % 2 == 1) && (width % 2 == 0)) {
        result += half_width;
    } else if ((height % 2 == 0) && (width % 2 == 1)) {
        result += half_height;
    }

    std::cout << result << '\n';
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
