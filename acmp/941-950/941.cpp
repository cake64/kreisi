#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string n, m;
    std::cin >> n >> m;
    std::cout << std::stoll(n, nullptr, 3) + std::stoll(m, nullptr, 3) << '\n';
    return 0;
}
