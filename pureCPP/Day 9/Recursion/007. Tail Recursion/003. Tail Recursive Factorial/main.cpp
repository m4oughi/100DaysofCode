int factorialHelper(int n, int accumulator) {
    if (n == 1)
        return accumulator;
    return factorialHelper(n - 1, accumulator * n);  // Tail recursion with accumulator
}

int factorial(int n) {
    return factorialHelper(n, 1);  // Initial accumulator value of 1
}
