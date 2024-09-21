#include <iostream>
#include <algorithm>  // Needed for std::max
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return max(arr[n - 1], findMax(arr, n - 1));  // Head recursion: compare after recursion
}

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum element is " << findMax(arr, n) << endl;
    return

