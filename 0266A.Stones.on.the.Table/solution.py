def solution():
    stone_count = int(input())
    stones = input()

    removed_count = 0
    stone = stones[0]
    for stone_index in range(1, stone_count):
        if stones[stone_index] == stone:
            removed_count += 1
        else:
            stone = stones[stone_index]

    print(removed_count)


if __name__ == "__main__":
    solution()
