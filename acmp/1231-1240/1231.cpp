#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) std::cin >> arr[i];

    int counter = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                counter++;
            }
        }
    }
    std::cout << counter << '\n';
    return 0;
}
