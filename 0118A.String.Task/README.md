# 118A. String Task

## Constraints

  - Time limit per test: 2 seconds
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/118/A)

Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

  - Deletes all the vowels,
  - Inserts a character "." before each consonant,
  - Replaces all uppercase consonants with corresponding lowercase ones.

Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

## Input

The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

## Output

Print the resulting string. It is guaranteed that this string is not empty.

## Examples

### Input

[Link to file](input_0.txt)

```
tour
```

### Output

[Link to file](expected_0.txt)

```
.t.r
```

### Input

[Link to file](input_1.txt)

```
Codeforces
```

### Output

[Link to file](expected_1.txt)

```
.c.d.f.r.c.s
```

### Input

[Link to file](input_2.txt)

```
aBAcAba
```

### Output

[Link to file](expected_2.txt)

```
.b.c.b
```

## Solutions

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>
#include <string>
#include <cctype>


void solution() {
    std::string text;
    std::cin >> text;

    for (const auto c: text) {
        switch (std::tolower(c)) {
            case 'a':
            case 'o':
            case 'y':
            case 'e':
            case 'u':
            case 'i':
                continue;

            default:
                std::cout << '.' << (char) std::tolower(c);
                break;
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
    for c in input().lower():
        if c not in ('a', 'o', 'y', 'e', 'u', 'i'):
            print(f".{c}", end="")

    print()


if __name__ == "__main__":
    solution()
```
