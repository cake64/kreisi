#include <iostream>

std::string int2base(int i, const int base) {
    const std::string d = "0123456789ABCDEF";

    std::string s;

    while(i > 0) {
        s.insert(0, 1, d[i % base]);
        i /= base;
    }
    return s;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string n;
    int k;
    std::cin >> n >> k;
    int a = 1, b = 0;
    for (const auto c : int2base(std::stoi(n), k)) {
        std::string s(1, c);
        a *= std::stoi(s, nullptr, k);
        b += std::stoi(s, nullptr, k);
    }
    std::cout << a - b << '\n';
    return 0;
}
