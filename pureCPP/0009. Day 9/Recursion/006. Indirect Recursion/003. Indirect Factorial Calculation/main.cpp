int factorialHelper(int n);

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorialHelper(n - 1);  // Calls helper function
}

int factorialHelper(int n) {
    return factorial(n);  // Calls factorial again
}
