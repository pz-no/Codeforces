#include <iostream>


void solution() {
    int number = 0;
    for (int row_index = 0; row_index < 5; ++row_index) {
        for (int col_index = 0; col_index < 5; ++col_index) {
            std::cin >> number;
            if (number == 1) {
                std::cout << abs(row_index - 2) + abs(col_index - 2) << '\n';
                return;
            }
        }
    }
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
