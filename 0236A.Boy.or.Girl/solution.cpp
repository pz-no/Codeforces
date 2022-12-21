#include <iostream>
#include <string>
#include <numeric>


void solution() {
    int have_runes[26] = {0};

    std::string input;
    std::cin >> input;

    for (const char c: input) {
        have_runes[c - 'a'] = 1;
    }

    int sum = std::accumulate(have_runes, have_runes + sizeof(have_runes) / sizeof(int), 0);
    if (sum % 2 == 0) {
        std::cout << "CHAT WITH HER!\n";
    } else {
        std::cout << "IGNORE HIM!\n";
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
