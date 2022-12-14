#include <iostream>


void solution() {
    unsigned long long height, width, size;
    std::cin >> height >> width >> size;

    unsigned long long height_ratio = (height % size == 0) ? (height / size) : ((height / size) + 1);
    unsigned long long width_ratio = (width % size == 0) ? (width / size) : ((width / size) + 1);
    std::cout << height_ratio * width_ratio << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
