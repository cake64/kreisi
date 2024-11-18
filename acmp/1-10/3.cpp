#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int a;
    std::cin >> a;
    a /= 10;
    std::cout << (long long)a*(a+1)*100 + 25 << '\n';
    return 0;
}
