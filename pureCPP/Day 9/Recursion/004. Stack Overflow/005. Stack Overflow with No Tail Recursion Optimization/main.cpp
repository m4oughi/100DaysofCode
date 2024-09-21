int factorial(int n, int accumulator = 1) {
    if (n == 0) // Base Case
        return accumulator;
    return factorial(n - 1, n * accumulator); // Recursive Case
}
