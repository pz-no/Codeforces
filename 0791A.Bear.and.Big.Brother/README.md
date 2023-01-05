# 791A. Bear and Big Brother

## Constraints

  - Time limit per test: 1 second
  - Memory limit per test: 256 megabytes
  - Input: standard input
  - Output: standard output

## Problem

[Link to Codeforces](https://codeforces.com/problemset/problem/791/A)

Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh $a$ and $b$ respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

## Input

The only line of the input contains two integers $a$ and $b$ $(1 \leq a \leq b \leq 10)$ — the weight of Limak and the weight of Bob respectively.

## Output

Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.

## Examples

### Input

[Link to file](input_0.txt)

```
4 7
```

### Output

[Link to file](expected_0.txt)

```
2
```

### Input

[Link to file](input_1.txt)

```
4 9
```

### Output

[Link to file](expected_1.txt)

```
3
```

### Input

[Link to file](input_2.txt)

```
1 1
```

### Output

[Link to file](expected_2.txt)

```
1
```

## Note

In the first sample, Limak weighs 4 and Bob weighs 7 initially. After one year their weights are $4 \cdot 3 = 12$ and $7 \cdot 2 = 14$ respectively (one weight is tripled while the other one is doubled). Limak isn't larger than Bob yet. After the second year weights are 36 and 28, so the first weight is greater than the second one. Limak became larger than Bob after two years so you should print 2.

In the second sample, Limak's and Bob's weights in next years are: 12 and 18, then 36 and 36, and finally 108 and 72 (after three years). The answer is 3. Remember that Limak wants to be larger than Bob and he won't be satisfied with equal weights.

In the third sample, Limak becomes larger than Bob after the first year. Their weights will be 3 and 2 then.

## Solutions

### Python 3.8.10

[Link to file](solution.py)

```python
import math


def solution():
    limak, bob = [float(x) for x in input().split()]

    result = (math.log2(bob) - math.log2(limak)) / (math.log2(3) - math.log2(2))
    if abs(result - int(result)) < 1e-8:
        result += 1
    else:
        result = int(result) + 1

    print(int(result))


if __name__ == "__main__":
    solution()
```

### GNU C++17 7.3.0

[Link to file](solution.cpp)

```cpp
#include <iostream>
#include <cmath>


void solution() {
    double limak, bob;
    std::cin >> limak >> bob;

    double result = (log10(bob) - log10(limak)) / (log10(3) - log10(2));
	if (abs(result - (int) result) < 1e-8) {
		++result;
	} else {
		result = (int) result + 1;
	}

    std::cout << (int) result << '\n';
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
	"math"
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
	var limak, bob float64
	Fscanf("%f %f\n", &limak, &bob)

	result := (math.Log(bob) - math.Log(limak)) / (math.Log(3) - math.Log(2))
	if result == float64(int(result)) {
		result++
	} else {
		result = float64(int(result) + 1)
	}

	Fprintf("%d\n", int(result))
}

func main() {
	Solution()
	writer.Flush()
}
```
