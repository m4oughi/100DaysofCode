int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) // Base Case: target not found
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) // Base Case: target found
        return mid;

    // Recursive Case: search left or right half
    if (arr[mid] > target)
        return binarySearch(arr, left, mid - 1, target);
    else
        return binarySearch(arr, mid + 1, right, target);
}
