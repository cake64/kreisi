#include <iostream>
#include <string>
#include <algorithm>
#include <cstddef>

void permutation(std::string& s, const size_t idx) {
    if (idx == s.size()) {
        std::cout << s << '\n';
        return;
    }
    for (size_t i = idx; i < s.size(); i++) {
        std::swap(s[i], s[idx]);
        permutation(s, idx + 1);
        std::swap(s[i], s[idx]);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::cin >> s;
    permutation(s, 0);
    return 0;
}
