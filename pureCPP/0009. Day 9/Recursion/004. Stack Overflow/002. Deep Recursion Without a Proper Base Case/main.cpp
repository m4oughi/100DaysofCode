void deepRecursion(int n) {
    if (n == 1000000) // Base Case: unreachable
        return;
    deepRecursion(n + 1); // Recursive Case: increment n but starts from 0
}
