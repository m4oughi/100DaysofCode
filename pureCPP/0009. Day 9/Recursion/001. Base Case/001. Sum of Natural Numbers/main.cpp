int sum(int n) {
    if (n == 0) // Base Case
        return 0;
    return n + sum(n - 1);
}