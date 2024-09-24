int gcd(int a, int b) {
    if (b == 0) // Base Case
        return a;
    return gcd(b, a % b); // Direct Recursive Call
}
