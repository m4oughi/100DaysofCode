int sumToN(int n) {
    if (n == 0) // Base Case
        return 0;
    return n + sumToN(n - 1); // Recursive Case: reduce n
}
