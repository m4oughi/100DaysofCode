int factorial(int n) {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);  // Head recursion: perform multiplication after recursion
}
