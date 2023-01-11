def solution():
    case_count = int(input())

    sum_x, sum_y, sum_z = 0, 0, 0
    for _ in range(case_count):
        x, y, z = [int(x) for x in input().split()]
        sum_x += x
        sum_y += y
        sum_z += z

    if sum_x == 0 and sum_y == 0 and sum_z == 0:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    solution()
