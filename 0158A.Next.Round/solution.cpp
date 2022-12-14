#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>


void solution() {
    int participant_count = 0;
    int candidate_count = 0;
    std::cin >> participant_count >> candidate_count;

    std::vector<int> scores;
    int score = 0;
    for (int participant_index = 0; participant_index < participant_count; ++participant_index) {
        std::cin >> score;
        if (score > 0) {
            scores.push_back(score);
        }
    }

    if (scores.size() <= candidate_count) {
        std::cout << scores.size();
    } else {
        std::nth_element(
            scores.begin(),
            scores.begin() + candidate_count - 1,
            scores.end(),
            std::greater<int>()
        );

        std::cout << std::accumulate(
            scores.begin(), scores.end(), 0, [&](int sum, int x) {
                return (sum + int(x >= *(scores.begin() + candidate_count - 1)));
            }
        );
    }

    std::cout << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
