# 236A. Boy or Girl

## Constraints

  - Time limit per test: 1 second
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/236/A)

Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

## Input

The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

## Output

If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).

## Examples

### Input

[Link to file](input_0.txt)

```
wjmzbmr
```

### Output

[Link to file](expected_0.txt)

```
CHAT WITH HER!
```

### Input

[Link to file](input_1.txt)

```
xiaodao
```

### Output

[Link to file](expected_1.txt)

```
IGNORE HIM!
```

### Input

[Link to file](input_2.txt)

```
sevenkplus
```

### Output

[Link to file](expected_2.txt)

```
CHAT WITH HER!
```

## Note

For the first example. There are 6 distinct characters in "wjmzbmr". These characters are: "w", "j", "m", "z", "b", "r". So wjmzbmr is a female and you should
print "CHAT WITH HER!".

## Solutions

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>
#include <string>
#include <numeric>


void solution() {
    int have_runes[26] = {0};

    std::string input;
    std::cin >> input;

    for (const char c: input) {
        have_runes[c - 'a'] = 1;
    }

    int sum = std::accumulate(have_runes, have_runes + sizeof(have_runes) / sizeof(int), 0);
    if (sum % 2 == 0) {
        std::cout << "CHAT WITH HER!\n";
    } else {
        std::cout << "IGNORE HIM!\n";
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
    have_runes = [0 for _ in range(26)]
    for rune in input():
        have_runes[ord(rune) - ord('a')] = 1

    if sum(have_runes) % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")


if __name__ == "__main__":
    solution()
```
