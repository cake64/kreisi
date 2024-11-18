#include <iostream>
#include <cmath>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string h;
    std::cin >> h;
    if (h.length() != 5 ||
        h[2] != '-' ||
        'A' > h[0] || h[0] > 'H' ||
        'A' > h[3] || h[3] > 'H' ||
        h[1] < '1' || '8' < h[1] ||
        h[4] < '1' || '8' < h[4]
    ) {
        std::cout << "ERROR";
    }
    else if (std::abs(h[0] - h[3]) == 1 && std::abs(h[1] - h[4]) == 2 ||
             std::abs(h[0] - h[3]) == 2 && std::abs(h[1] - h[4]) == 1) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return 0;
}