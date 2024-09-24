int sumHelper(int n, int accumulator) {
    if (n == 0)
        return accumulator;
    return sumHelper(n - 1, accumulator + n);  // Accumulates result in a tail-recursive manner
}

int sum(int n) {
    return sumHelper(n, 0);  // Start with an accumulator value of 0
}
