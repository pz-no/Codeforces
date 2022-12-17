def solution():
    height, width = [int(x) for x in input().split()]

    half_height = height // 2
    half_width = width // 2

    result = 2 * half_height * half_width
    if height % 2 == 1 and width % 2 == 1:
        result += half_height + half_width

    elif height % 2 == 1 and width % 2 == 0:
        result += half_width

    elif height % 2 == 0 and width % 2 == 1:
        result += half_height

    print(result)


if __name__ == "__main__":
    solution()
