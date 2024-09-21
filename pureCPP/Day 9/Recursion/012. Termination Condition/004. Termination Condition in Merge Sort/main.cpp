#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    // Merge function implementation as before
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {  // Termination condition
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);         // Recursive call for left half
        mergeSort(arr, m + 1, r);     // Recursive call for right half
        merge(arr, l, m, r);          // Merge the sorted halves
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i : arr) cout << i << " ";
    cout << endl;
    return 0;
}
