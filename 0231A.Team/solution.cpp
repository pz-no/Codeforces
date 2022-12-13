#include <iostream>
#include <string>


void solution() {
    int problem_count = 0;
    std::cin >> problem_count;
    std::cin.ignore();

    std::string line;
    int solved_count = 0;
    for (int problem_index = 0; problem_index < problem_count; ++problem_index) {
        std::getline(std::cin, line);
        solved_count += (line[0] == '1') + (line[2] == '1') + (line[4] == '1') >= 2 ? 1 : 0;
    }
    std::cout << solved_count << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
