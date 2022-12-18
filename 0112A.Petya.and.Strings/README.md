# 112A. Petya and Strings

## Constraints

  - Time limit per test: 2 seconds
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/112/A)

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

## Input

Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

## Output

If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

## Examples

### Input

[Link to file](input_0.txt)

```
aaaa
aaaA
```

### Output

[Link to file](expected_0.txt)

```
0
```

### Input

[Link to file](input_1.txt)

```
abs
Abz
```

### Output

[Link to file](expected_1.txt)

```
-1
```

### Input

[Link to file](input_2.txt)

```
abcdefg
AbCdEfF
```

### Output

[Link to file](expected_2.txt)

```
1
```

## Note

If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

http://en.wikipedia.org/wiki/Lexicographical_order

## Solutions

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>
#include <string>
#include <cctype>


void solution() {
    std::string first, second;
    std::cin >> first >> second;

    int result = 0;
    std::string::const_iterator p = first.begin();
    std::string::const_iterator q = second.begin();
    while (p != first.end()) {
        if (toupper(*p) < toupper(*q)) {
            result = -1;
            break;
        }

        if (toupper(*p) > toupper(*q)) {
            result = 1;
            break;
        }

        ++p;
        ++q;
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

### Python 3.8.10

[Link to file](solution.py)

```python
def solution():
    first = input().upper()
    second = input().upper()

    result = 0
    for i, c in enumerate(first):
        if c < second[i]:
            result = -1
            break

        if c > second[i]:
            result = 1
            break

    print(result)


if __name__ == "__main__":
    solution()
```
