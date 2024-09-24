int fibonacciHelper(int n, int a, int b) {
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fibonacciHelper(n - 1, b, a + b);  // Tail recursion with Fibonacci sum
}

int fibonacci(int n) {
    return fibonacciHelper(n, 0, 1);  // Initial values for the first two Fibonacci numbers
}
