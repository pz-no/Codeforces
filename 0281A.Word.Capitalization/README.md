# 281A. Word Capitalization

## Constraints

  - Time limit per test: 2 seconds
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/281/A)

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

## Input

A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed $10^3$.

## Output

Output the given word after capitalization.

## Examples

### Input

[Link to file](input_0.txt)

```
ApPLe
```

### Output

[Link to file](expected_0.txt)

```
ApPLe
```

### Input

[Link to file](input_1.txt)

```
konjac
```

### Output

[Link to file](expected_1.txt)

```
Konjac
```

## Solutions

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>
#include <string>
#include <cctype>


void solution() {
    std::string word;
    std::cin >> word;
    std::cout << (char) std::toupper(word[0]) << word.substr(1) << '\n';
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
    word = input()
    print(f"{word[0].upper()}{word[1:]}")


if __name__ == "__main__":
    solution()
```
