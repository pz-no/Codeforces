# 266A. Stones on the Table

## Constraints

  - Time limit per test: 2 seconds
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/266/A)

There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

## Input

The first line contains integer $n$ $(1 \leq n  \leq 50)$ — the number of stones on the table.

The next line contains string $s$, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to $n$ from left to right. Then the $i$-th character s equals "R", if the $i$-th stone is red, "G", if it's green and "B", if it's blue.

## Output

Print a single integer — the answer to the problem.

## Examples

### Input

[Link to file](input_0.txt)

```
3
RRG
```

### Output

[Link to file](expected_0.txt)

```
1
```

### Input

[Link to file](input_1.txt)

```
5
RRRRR
```

### Output

[Link to file](expected_1.txt)

```
4
```

### Input

[Link to file](input_2.txt)

```
4
BRBG
```

### Output

[Link to file](expected_2.txt)

```
0
```

## Solutions

### Python 3.8.10

[Link to file](solution.py)

```python
def solution():
    stone_count = int(input())
    stones = input()

    removed_count = 0
    stone = stones[0]
    for stone_index in range(1, stone_count):
        if stones[stone_index] == stone:
            removed_count += 1
        else:
            stone = stones[stone_index]

    print(removed_count)


if __name__ == "__main__":
    solution()
```

### GNU C++17 3.10.7

[Link to file](solution.cpp)

```cpp
#include <iostream>
#include <string>


void solution() {
    int stone_count;
    std::cin >> stone_count;

    std::string stones;
    std::cin >> stones;

    int removed_count = 0;
    std::string::const_iterator last_stone_iterator = stones.begin();
    for (std::string::const_iterator stone_iterator = last_stone_iterator + 1; stone_iterator != stones.end(); ++stone_iterator) {
        if (*stone_iterator == *last_stone_iterator) {
            ++removed_count;
        } else {
            last_stone_iterator = stone_iterator;
        }
    }

    std::cout << removed_count << '\n';
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
