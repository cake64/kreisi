#include <iostream>

inline int char2base(const char c) {
    if (c == '0') return 2;
    if (std::isdigit(c)) return c - '0' + 1;
    if (std::isupper(c)) return c - 'A' + 11;
    return 0x7f;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    getline(std::cin, s);
    int max_base = 0;
    for (const char c : s) max_base = std::max(char2base(c), max_base);
    if (max_base == 0x7f) max_base = -1;
    std::cout << max_base << '\n';
    return 0;
}
