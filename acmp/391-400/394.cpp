#include <iostream>
#include <numeric>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n, m;
    std::cin >> n >> m;
    std::cout << std::lcm(m, n) / m << '\n';

    return 0;
}
