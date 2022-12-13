def solution():
    problem_count = int(input())

    solved_count = 0
    for problem_index in range(problem_count):
        petya, vasya, tonya = [int(x) for x in input().split()]
        if petya + vasya + tonya >= 2:
            solved_count += 1

    print(solved_count)


if __name__ == "__main__":
    solution()
