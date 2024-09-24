int sumEven(int arr[], int n);
int sumOdd(int arr[], int n);

int sumEven(int arr[], int n) {
    if (n == 0)
        return 0;
    if (arr[n - 1] % 2 == 0)
        return arr[n - 1] + sumOdd(arr, n - 1);  // Call sumOdd if current element is even
    else
        return sumOdd(arr, n - 1);  // Skip element if it’s odd
}

int sumOdd(int arr[], int n) {
    if (n == 0)
        return 0;
    if (arr[n - 1] % 2 != 0)
        return arr[n - 1] + sumEven(arr, n - 1);  // Call sumEven if current element is odd
    else
        return sumEven(arr, n - 1);  // Skip element if it’s even
}
