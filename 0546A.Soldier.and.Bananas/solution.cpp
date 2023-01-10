#include <iostream>


void solution() {
    int k, n, w;
    std::cin >> k >> n >> w;

    const int cost = k * (1 + w) * w / 2;
    if (cost > n) {
        std::cout << cost - n << '\n';
    } else {
        std::cout << 0 << '\n';
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
