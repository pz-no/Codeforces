def solution():
    weight = int(input())
    result = "YES" if weight > 2 and weight % 2 == 0 else "NO"
    print(result)


if __name__ == "__main__":
    solution()
