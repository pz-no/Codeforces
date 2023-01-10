def solution():
    k, n, w = [int(x) for x in input().split()]

    cost = k * (1 + w) * w // 2
    if cost > n:
        print(cost - n)
    else:
        print(0)


if __name__ == "__main__":
    solution()
