# 263A. Beautiful Matrix

## Constraints

  - Time limit per test: 2 seconds
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/263/A)

You've got a $5 \times 5$ matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

  - Swap two neighboring matrix rows, that is, rows with indexes $i$ and $i + 1$ for some integer $i$ $(1 \leq i \lt 5)$.
  - Swap two neighboring matrix columns, that is, columns with indexes $j$ and $j + 1$ for some integer $j$ $(1 \leq j \lt 5)$.

You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

## Input

The input consists of five lines, each line contains five integers: the $j$-th integer in the $i$-th line of the input represents the element of the matrix that is located on the intersection of the $i$-th row and the $j$-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

## Output

Print a single integer — the minimum number of moves needed to make the matrix beautiful.

## Examples

### Input

[Link to file](input_0.txt)

```
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
```

### Output

[Link to file](expected_0.txt)

```
3
```

### Input

[Link to file](input_1.py)

```
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
```

### Output

[Link to file](expected_1.py)

```
1
```

## Solutions

### GNU C++17 7.3.10

[Link to file](solution.cpp)

```cpp
#include <iostream>


void solution() {
    int number = 0;
    for (int row_index = 0; row_index < 5; ++row_index) {
        for (int col_index = 0; col_index < 5; ++col_index) {
            std::cin >> number;
            if (number == 1) {
                std::cout << abs(row_index - 2) + abs(col_index - 2) << '\n';
                return;
            }
        }
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

### Python 3.8.10

[Link to file](solution.py)

```python
def solution():
    for row_index in range(5):
        row = [int(x) for x in input().split()]
        for col_index in range(5):
            if row[col_index] == 1:
                row_distance = int(abs(row_index - 2))
                col_distance = int(abs(col_index - 2))
                print(row_distance + col_distance)
                return


if __name__ == "__main__":
	solution()
```
