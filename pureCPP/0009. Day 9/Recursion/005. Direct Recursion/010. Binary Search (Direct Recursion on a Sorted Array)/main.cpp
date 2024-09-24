int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) // Base Case: element not found
        return -1;

    int mid = left + (right - left) / 2;
    if (arr[mid] == target) // Base Case: element found
        return mid;
    else if (arr[mid] > target)
        return binarySearch(arr, left, mid - 1, target); // Direct Recursive Call
    else
        return binarySearch(arr, mid + 1, right, target); // Direct Recursive Call
}
