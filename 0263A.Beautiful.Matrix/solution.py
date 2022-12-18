def solution():
    for row_index in range(5):
        row = [int(x) for x in input().split()]
        for col_index in range(5):
            if row[col_index] == 1:
                row_distance = int(abs(row_index - 2))
                col_distance = int(abs(col_index - 2))
                print(row_distance + col_distance)
                return


if __name__ == "__main__":
	solution()
