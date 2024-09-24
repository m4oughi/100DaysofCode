int countDigits(int n) {
    if (n == 0) // Base Case
        return 0;
    return 1 + countDigits(n / 10); // Direct Recursive Call
}
