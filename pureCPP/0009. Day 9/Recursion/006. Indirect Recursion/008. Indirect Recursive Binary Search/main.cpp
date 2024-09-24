int binarySearchHelper(int arr[], int left, int right, int x);

int binarySearch(int arr[], int left, int right, int x) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == x)
        return mid;
    return binarySearchHelper(arr, left, right, x);  // Call helper for further processing
}

int binarySearchHelper(int arr[], int left, int right, int x) {
    int mid = left + (right - left) / 2;

    if (arr[mid] > x)
        return binarySearch(arr, left, mid - 1, x);  // Call binarySearch recursively
    else
        return binarySearch(arr, mid + 1, right, x);  // Call binarySearch recursively
}
