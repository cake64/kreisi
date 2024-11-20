#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    bool first = true;
    for (long long x = 2; x*x <= n; x++) {
        while (n % x == 0) {
            if (first) first = false;
            else std::cout << '*';
            std::cout << x;
            n /= x;
        }
    }
    if (n > 1) {
        if (!first) std::cout << '*';
        std::cout << n;
    }
    return 0;
}
