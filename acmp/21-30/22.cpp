#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::cout << __builtin_popcount(n) << '\n';
    return 0;
}
