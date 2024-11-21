#include <iostream>
#include <cmath>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned long long a1, a2, a3, a4;
    std::cin >> a1 >> a2 >> a3 >> a4;

    std::cout << static_cast<unsigned long long>(std::sqrt(static_cast<long double>(std::min(a1, a2) + std::min(a3, a4)))) << '\n';
    return 0;
}
