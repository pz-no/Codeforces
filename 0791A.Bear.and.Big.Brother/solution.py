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
