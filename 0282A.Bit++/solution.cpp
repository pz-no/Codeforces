#include <iostream>
#include <string>


void solution() {
    int cmd_count = 0;
    std::cin >> cmd_count;

    std::string cmd;
    int sum = 0;
    for (int cmd_index = 0; cmd_index < cmd_count; ++cmd_index) {
        std::cin >> cmd;
        sum += (*cmd.begin() == '+' || *cmd.rbegin() == '+') ? 1 : -1;
    }

    std::cout << sum << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
