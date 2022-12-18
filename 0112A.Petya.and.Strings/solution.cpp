#include <iostream>
#include <string>
#include <cctype>


void solution() {
    std::string first, second;
    std::cin >> first >> second;

    int result = 0;
    std::string::const_iterator p = first.begin();
    std::string::const_iterator q = second.begin();
    while (p != first.end()) {
        if (toupper(*p) < toupper(*q)) {
            result = -1;
            break;
        }

        if (toupper(*p) > toupper(*q)) {
            result = 1;
            break;
        }

        ++p;
        ++q;
    }

    std::cout << result << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
