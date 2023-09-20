#include <iostream>
using namespace std;

void selection(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the minimum element with the current element
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int A[6] = {2, 6, 4, 9, 3, 7};
    int n = sizeof(A) / sizeof(A[0]);
    
    selection(A, n);

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
