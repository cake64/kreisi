#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}
