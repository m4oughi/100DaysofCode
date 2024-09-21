int factorial(int n) {
    if (n == 1) // Base Case
        return 1;
    return n * factorial(n - 1); // Recursive Case: factorial(n) = n * factorial(n - 1)
}
