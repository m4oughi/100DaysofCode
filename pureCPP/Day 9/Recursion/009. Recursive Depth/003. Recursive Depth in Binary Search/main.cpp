int binarySearch(int arr[], int left, int right, int x) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return binarySearch(arr, left, mid - 1, x);  // Depth is logarithmic
    else
        return binarySearch(arr, mid + 1, right, x);  // Depth is logarithmic
}
