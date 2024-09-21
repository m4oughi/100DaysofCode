#include <iostream>
#include <vector>

using namespace std;

// Function to merge two halves of an array
void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1; // Size of the left subarray
    int n2 = r - mid;     // Size of the right subarray

    // Use vectors to store left and right halves
    vector<int> left(n1), right(n2);

    // Copy data to temporary vectors left[] and right[]
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];

    // Merge the temporary vectors back into arr[l..r]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) // Base Case
        return;

    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);      // Direct Recursive Call: sort left half
    mergeSort(arr, mid + 1, r);  // Direct Recursive Call: sort right half
    merge(arr, l, mid, r);       // Merge the two halves
}
