bool isOdd(int n);

bool isEven(int n) {
    if (n == 0)
        return true;
    else
        return isOdd(n - 1);  // Calls isOdd
}

bool isOdd(int n) {
    if (n == 0)
        return false;
    else
        return isEven(n - 1);  // Calls isEven
}
