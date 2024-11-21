#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed << 1 | n & 1;
        n >>= 1;
    }
    std::cout << reversed << '\n';
    return 0;
}
