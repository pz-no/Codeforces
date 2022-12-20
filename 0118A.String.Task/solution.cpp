#include <iostream>
#include <string>
#include <cctype>


void solution() {
    std::string text;
    std::cin >> text;

    for (const auto c: text) {
        switch (std::tolower(c)) {
            case 'a':
            case 'o':
            case 'y':
            case 'e':
            case 'u':
            case 'i':
                continue;

            default:
                std::cout << '.' << (char) std::tolower(c);
                break;
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
