#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::vector<int> a1;
    std::vector<int> a2;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int j;
        std::cin >> j;
        if (j % 2 == 0) a1.push_back(j);
        else a2.push_back(j);
    }
    for (auto x : a2) std::cout << x << ' ';
    std::cout << '\n';
    for (auto x : a1) std::cout << x << ' ';
    std::cout << '\n';
    std::cout << (a2.size() <= a1.size() ? "YES" : "NO") << '\n';
    return 0;
}
