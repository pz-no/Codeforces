def solution():
    height, width, size = [int(x) for x in input().split()]
    height_ratio = height // size if height % size == 0 else height // size + 1
    width_ratio = width // size if width % size == 0 else width // size + 1
    area = height_ratio * width_ratio
    print(f"{area}")


if __name__ == "__main__":
    solution()
