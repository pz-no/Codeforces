#include <iostream>


void solution() {
    int height, width;
    std::cin >> height >> width;

    int half_height = height / 2;
    int half_width = width / 2;
    int result = 2 * half_height * half_width;
    if ((height % 2 == 1) && (width % 2 == 1)) {
        result += half_height + half_width;
    } else if ((height % 2 == 1) && (width % 2 == 0)) {
        result += half_width;
    } else if ((height % 2 == 0) && (width % 2 == 1)) {
        result += half_height;
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
