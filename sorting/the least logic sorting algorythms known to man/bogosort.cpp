#include <bits/stdc++.h>
using namespace std;

bool not_sorted(int A[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (A[i] > A[i + 1]) {
            return true;
        }
    }
    return false;
}

void shuffle(int A[], int size) {
    for (int i = 0; i < size; i++) {
        swap(A[i], A[rand() % size]);
    }
}

void bogoSort(int A[], int size) {
    while (not_sorted(A, size)) {
        shuffle(A, size);
    }
}

int main() {
    // randomize array
    unsigned int size;
    int A[10];
    for (int i = 0; i < 10; i++)
        A[i] = i;
    shuffle(A, 10);

    // sort it
    bogoSort(A, 10);

    // print it
    for (auto i: A) {
        cout << i << ' ';
    }
    return 0;
}
