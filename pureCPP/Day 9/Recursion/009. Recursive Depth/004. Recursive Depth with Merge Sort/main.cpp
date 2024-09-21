void merge(int arr[], int left, int mid, int right) {
    // Merge function implementation
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);  // Recursive depth increases logarithmically
        mergeSort(arr, mid + 1, right);  // Recursive depth increases logarithmically
        merge(arr, left, mid, right);
    }
}
