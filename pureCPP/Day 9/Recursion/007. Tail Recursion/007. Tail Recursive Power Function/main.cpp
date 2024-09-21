int powerHelper(int x, int n, int accumulator) {
    if (n == 0)
        return accumulator;
    return powerHelper(x, n - 1, accumulator * x);  // Tail recursion with accumulated power
}

int power(int x, int n) {
    return powerHelper(x, n, 1);  // Start with an initial accumulator of 1
}
