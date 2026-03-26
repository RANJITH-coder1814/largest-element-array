#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    int max = arr[0];  // assume first element is largest

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {10, 25, 5, 40, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest element: " << findLargest(arr, n);

    return 0;
}
