int binarySearchHelper(int arr[], int left, int right, int x) {
    if (left > right)
        return -1;
    
    int mid = left + (right - left) / 2;

    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return binarySearchHelper(arr, left, mid - 1, x);  // Tail recursion to search left
    else
        return binarySearchHelper(arr, mid + 1, right, x);  // Tail recursion to search right
}

int binarySearch(int arr[], int n, int x) {
    return binarySearchHelper(arr, 0, n - 1, x);
}
