#include <iostream>
#include <numeric>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b;
    std::cin >> a >> b;
    std::cout << std::lcm(a, b) << '\n';
    return 0;
}

/*
int main() {
    int a, b, aa, bb;
    std::cin >> a >> b;
    aa = a; bb = b;
    while (aa != bb) {
        if (aa < bb) aa += a;
        else bb += b;
    }
    std::cout << aa;

    return 0;
}
*/
