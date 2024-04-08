/*
bubble sort in c++
*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int A[], unsigned int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(A[j] > A[j+1]) {
                swap(A[j], A[j+1]);
            }
        }
    }
}

int main() {
    // randomize the array
    unsigned int size;
    int A[50000];
    srand(1);
    for (int i = 0; i < 50000; i++) {
        A[i] = rand() % (int)pow(2, 16) + 1;
    }

    // sort it
    bubbleSort(A, 50000);

    // print it
    for (auto i: A) {
        cout << i << ' ';
    }
    return 0;
}
