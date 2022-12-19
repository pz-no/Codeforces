#include <iostream>
#include <string>


void solution() {
    std::string line;
    std::getline(std::cin, line);

    int counts[3] = {0, 0, 0};
    for (const char c: line) {
        if (c != '+') {
            counts[int(c - '0') - 1] += 1;
        }
    }

    bool is_first = true;
    for (int i = 0; i < 3; ++i) {
        for (int count = 0; count < counts[i]; ++count) {
            if (is_first) {
                is_first = false;
            } else {
                std::cout << '+';
            }

            std::cout << i + 1;
        }
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
