#include <iostream>


void solution() {
    int weight = 0;
    std::cin >> weight;
    std::cout << ((weight > 2 && weight % 2 == 0) ? "YES" : "NO") << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
