#include <iostream>
#include <numeric>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << std::gcd(a, b) << '\n';
    return 0;
}

/*
int main() {
    int a, b;
    std::cin >> a >> b;
    while (a != 0 && b != 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    std::cout << a + b << '\n';

    return 0;
}
*/
