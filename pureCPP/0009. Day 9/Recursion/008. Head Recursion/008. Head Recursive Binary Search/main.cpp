int binarySearch(int arr[], int left, int right, int x) {
    if (left > right)
        return -1;
    
    int mid = left + (right - left) / 2;

    if (arr[mid] == x)
        return mid;
    
    if (arr[mid] > x)
        return binarySearch(arr, left, mid - 1, x);  // Head recursion: search left before comparison
    
    return binarySearch(arr, mid + 1, right, x);  // Head recursion: search right before comparison
}
