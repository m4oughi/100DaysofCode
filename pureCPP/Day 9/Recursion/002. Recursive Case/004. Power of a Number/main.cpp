int power(int x, int n) {
    if (n == 0) // Base Case
        return 1;
    return x * power(x, n - 1); // Recursive Case: power(x, n) = x * power(x, n-1)
}
