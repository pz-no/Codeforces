def solution():
    participant_count, candidate_count = [int(x) for x in input().split()]
    scores = [int(x) for x in input().split()]

    participant_index = candidate_count - 1
    threshold = scores[participant_index]
    if scores[participant_index] > 0:
        while participant_index < participant_count and scores[participant_index] == threshold:
            participant_index += 1
    else:
        while participant_index >= 0 and scores[participant_index] == 0:
            participant_index -= 1
        participant_index += 1

    print(participant_index)


if __name__ == "__main__":
    solution()
