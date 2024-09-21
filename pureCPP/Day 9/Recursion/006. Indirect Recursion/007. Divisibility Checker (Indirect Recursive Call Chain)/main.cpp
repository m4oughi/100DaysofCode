bool isDivisibleBy5(int n);

bool isDivisibleBy3(int n) {
    if (n == 0)
        return true;
    else if (n < 0)
        return false;
    return isDivisibleBy5(n - 3);  // Call isDivisibleBy5 if reduced by 3
}

bool isDivisibleBy5(int n) {
    if (n == 0)
        return true;
    else if (n < 0)
        return false;
    return isDivisibleBy3(n - 5);  // Call isDivisibleBy3 if reduced by 5
}
