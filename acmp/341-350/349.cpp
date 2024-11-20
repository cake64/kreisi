#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int m, n;
    std::cin >> m >> n;
    bool is_prime[n + 1];
    for (int i = 2; i <= n; i++) is_prime[i] = true;

    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    bool any = false;
    for (int i = m; i <= n; i++) {
        if (is_prime[i]) {
            std::cout << i << '\n';
            any = true;
        }
    }
    if (!any) std::cout << "Absent\n";
    return 0;
}
