#include <bits/stdc++.h>

bool IsDigit(const char c) {
    return c >= '0' && c <= '9';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int sum = 0;
    char ch;
    while (std::cin >> ch) {
        sum += IsDigit(ch);
    }

    std::cout << sum << "\n";

    return 0;
}
