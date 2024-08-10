#include <bits/stdc++.h>
using namespace std;

void shakerSort(int A[], unsigned int size) {
    unsigned int left = 0;
    unsigned int right = size - 1;
    while (left <= right) {
        for (int i = left; i < right; i++) {
            if (A[i] > A[i + 1]) {
                swap(A[i], A[i + 1]);
            }
        }
        right--;
    
        for (int i = right; i > left; i--) {
            if (A[i - 1] > A[i]) {
                swap(A[i], A[i - 1]);
            }
        }
        left++;
    }
}

int main() {
    // randomize array
    unsigned int size;
    int A[50000];
    srand(1);
    for (int i = 0; i < 50000; i++) {
        A[i] = rand() % (int)pow(2, 16) + 1;
    }

    // sort it
    shakerSort(A, 50000);

    // print it
    for (auto i: A) {
        cout << i << ' ';
    }
    return 0;
}
