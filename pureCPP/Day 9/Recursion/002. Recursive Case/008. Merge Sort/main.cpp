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

// Recursive function to sort the array using merge sort
void mergeSort(int arr[], int l, int r) {
    if (l >= r) // Base Case: single element array
        return;

    int mid = l + (r - l) / 2;

    // Sort first and second halves
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

    // Merge the sorted halves
    merge(arr, l, mid, r);
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is: ";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array is: ";
    printArray(arr, arr_size);

    return 0;
}
