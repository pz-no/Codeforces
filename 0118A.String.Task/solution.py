def solution():
    for c in input().lower():
        if c not in ('a', 'o', 'y', 'e', 'u', 'i'):
            print(f".{c}", end="")

    print()


if __name__ == "__main__":
    solution()
