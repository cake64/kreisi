#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int v, t;
    std::cin >> v >> t;
    std::cout << (v + 1090) * t % 109 + 1 << '\n';
    return 0;
}
