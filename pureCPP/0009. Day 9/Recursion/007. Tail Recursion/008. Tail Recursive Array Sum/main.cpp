int sumArrayHelper(int arr[], int n, int index, int accumulator) {
    if (index == n)
        return accumulator;
    return sumArrayHelper(arr, n, index + 1, accumulator + arr[index]);  // Tail recursion
}

int sumArray(int arr[], int n) {
    return sumArrayHelper(arr, n, 0, 0);  // Start with an index of 0 and an accumulator of 0
}
