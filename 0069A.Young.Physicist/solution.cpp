#include <iostream>


void solution() {
    int case_count;
    std::cin >> case_count;

    int x, y, z, sum_x = 0, sum_y = 0, sum_z = 0;
    for (int case_index = 0; case_index < case_count; ++case_index) {
        std::cin >> x >> y >> z;

        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
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

