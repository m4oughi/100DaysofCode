void functionA(int n) {
    if (n == 0) // Base Case
        return;
    functionB(n); // Calls functionB
}

void functionB(int n) {
    functionA(n - 1); // Calls functionA
}
