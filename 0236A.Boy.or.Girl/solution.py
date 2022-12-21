def solution():
    have_runes = [0 for _ in range(26)]
    for rune in input():
        have_runes[ord(rune) - ord('a')] = 1

    if sum(have_runes) % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")


if __name__ == "__main__":
    solution()
