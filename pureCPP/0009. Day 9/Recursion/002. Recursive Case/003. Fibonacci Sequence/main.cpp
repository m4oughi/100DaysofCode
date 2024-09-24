int fibonacci(int n) {
    if (n == 0 || n == 1) // Base Case
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive Case: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
}
