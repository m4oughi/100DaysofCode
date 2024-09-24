int power(int base, int exp) {
    if (exp == 0) // Base Case
        return 1;
    return base * power(base, exp - 1); // Direct Recursive Call
}
