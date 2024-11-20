#include <iostream>

int parse(std::string& s, size_t& idx) {
    if (s[idx] == 'm') {
        idx += 2;
        int n = parse(s, idx);
        idx++;
        n = std::min(n, parse(s, idx));
        idx++;
        return n;
    }
    if (s[idx] == 'M') {
        idx += 2;
        int n = parse(s, idx);
        idx++;
        n = std::max(n, parse(s, idx));
        idx++;
        return n;
    }
    std::string num_s;
    while (std::isdigit(s[idx])) num_s += s[idx++];
    return std::stoi(num_s);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::cin >> s;
    size_t idx = 0;
    std::cout << parse(s, idx) << '\n';
    return 0;
}
