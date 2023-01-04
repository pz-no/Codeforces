# 71A. Way Too Long Words

## Constraints

  - Time limit per test: 1 second
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/71/A)

Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

## Input

The first line contains an integer $n (1 \leq n \leq 100)$. Each of the following $n$ lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

## Output

Print $n$ lines. The $i$-th line should contain the result of replacing of the $i$-th word from the input data.

## Examples

### Input

[Link to file](input_0.txt)

```
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
```

### Output

[Link to file](expected_0.txt)

```
word
l10n
i18n
p43s
```

## Solutions

### Python 3.8.10

[Link to file](solution.py)

```python
 def solution():
    case_count = int(input())

    for _ in range(case_count):
        word = input()
        if len(word) <= 10:
            print(word)
        else:
            print(f"{word[0]}{len(word) - 2}{word[-1]}")


 if __name__ == "__main__":
      solution()
```

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>


void solution() {
    int case_count = 0;
    std::cin >> case_count;

    std::string word;
    for (int case_index = 0; case_index < case_count; ++case_index) {
        std::cin >> word;
        if (word.size() <= 10) {
            std::cout << word;
        } else {
            std::cout << *word.begin() << word.length() - 2 <<*word.rbegin();
        }

        std::cout << '\n';
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

func Printf(format string, x ...interface{}) {
	fmt.Fprintf(writer, format, x...)
}

func Scanf(format string, x ...interface{}) {
	fmt.Fscanf(reader, format, x...)
}

func Solution() {
	var caseCount int
	Scanf("%d\n", &caseCount)

	var word string
	for caseIndex := 0; caseIndex < caseCount; caseIndex++ {
		Scanf("%s\n", &word)
		if len(word) <= 10 {
			Printf("%s\n", word)
		} else {
			Printf("%c%d%c\n", word[0], len(word)-2, word[len(word)-1])
		}
	}
}

func main() {
	Solution()
	writer.Flush()
}
```