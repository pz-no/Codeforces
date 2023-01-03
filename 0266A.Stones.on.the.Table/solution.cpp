#include <iostream>
#include <string>


void solution() {
    int stone_count;
    std::cin >> stone_count;

    std::string stones;
    std::cin >> stones;

    int removed_count = 0;
    std::string::const_iterator last_stone_iterator = stones.begin();
    for (std::string::const_iterator stone_iterator = last_stone_iterator + 1; stone_iterator != stones.end(); ++stone_iterator) {
        if (*stone_iterator == *last_stone_iterator) {
            ++removed_count;
        } else {
            last_stone_iterator = stone_iterator;
        }
    }

    std::cout << removed_count << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}