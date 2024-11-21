#include <iostream>
#include <vector>

std::string int2base(int i, const int base) {
    const std::string d = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    std::string s;

    while (i > 0) {
        s.insert(0, 1, d[i % base]);
        i /= base;
    }
    return s;
}

bool isPalindrome(const std::string& s) {
    auto b = s.cbegin();
    auto e = s.cend() - 1;
    while (b < e) {
        if (*b != *e) return false;
        b++;
        e--;
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    int counter = 0;
    std::vector<int> arr;
    arr.reserve(16);
    for (int i = 2; i <= 36; i++) {
        if (std::string s = int2base(n, i); isPalindrome(s)) {
            counter++;
            arr.push_back(i);
        }
    }
    if (counter == 0) {
        std::cout << "none\n";
    }
    else if (counter == 1) {
        std::cout << "unique\n";
    }
    else {
        std::cout << "multiple\n";
    }
    for (const int i : arr) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return 0;
}
