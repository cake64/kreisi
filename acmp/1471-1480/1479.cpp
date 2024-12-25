#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long a, b;
    std::cin >> a >> b;
    std::cout << (a % b + std::abs(b)) % std::abs(b) << '\n';
    return 0;
}
