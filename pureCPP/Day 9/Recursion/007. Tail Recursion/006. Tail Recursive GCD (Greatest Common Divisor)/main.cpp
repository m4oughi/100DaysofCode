int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);  // Tail recursion with Euclid's algorithm
}
