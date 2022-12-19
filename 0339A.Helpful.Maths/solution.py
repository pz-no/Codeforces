def solution():
    line = input()

    counts = [0, 0, 0]
    for c in line:
        if c != "+":
            counts[int(c) - 1] += 1

    is_first = True
    for i in range(3):
        for count in range(counts[i]):
            if is_first:
                is_first = False
            else:
                print("+", end="")
            print(i + 1, end="")
    print("")


if __name__ == "__main__":
    solution()
