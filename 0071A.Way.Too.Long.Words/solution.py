 def solution():
    case_count = int(input())

    for _ in range(case_count):
        word = input()
        if len(word) <= 10:
            print(word)
        else:
            print(f"{word[0]}{len(word) - 2}{word[-1]}")


 if __name__ == "__main__":
      solution()
