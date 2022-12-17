def solution():
    cmd_count = int(input())

    sum = 0
    for _ in range(cmd_count):
        cmd = input()
        if cmd[0] == '+' or cmd[-1] == '+':
            sum += 1
        else:
            sum -= 1

    print(sum)


if __name__ == "__main__":
    solution()
