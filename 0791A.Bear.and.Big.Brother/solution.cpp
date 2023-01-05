#include <iostream>
#include <cmath>


void solution() {
    double limak, bob;
    std::cin >> limak >> bob;

    double result = (log10(bob) - log10(limak)) / (log10(3) - log10(2));
	if (abs(result - (int) result) < 1e-8) {
		++result;
	} else {
		result = (int) result + 1;
	}

    std::cout << (int) result << '\n';
}


void setup() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}


int main() {
    setup();
    solution();
}
