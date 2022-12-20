#include <iostream>
#include <string>
#include <cctype>


void solution() {
    std::string word;
    std::cin >> word;
    std::cout << (char) std::toupper(word[0]) << word.substr(1) << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
