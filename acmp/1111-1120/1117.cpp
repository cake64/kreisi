#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    n = 9 * 60 + n * 45 + (n - 1) * 5 + (n - 1) / 2 * 10;
    std::cout << n / 60 << " " << n % 60;
    return 0;
}
