#include <iostream>


void solution() {
    int case_count = 0;
    std::cin >> case_count;

    std::string word;
    for (int case_index = 0; case_index < case_count; ++case_index) {
        std::cin >> word;
        if (word.size() <= 10) {
            std::cout << word;
        } else {
            std::cout << *word.begin() << word.length() - 2 <<*word.rbegin();
        }

        std::cout << '\n';
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
