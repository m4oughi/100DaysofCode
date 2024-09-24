bool isSorted(int arr[], int n) {
    if (n == 1) // Base Case
        return true;
    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1); // Direct Recursive Call
}
