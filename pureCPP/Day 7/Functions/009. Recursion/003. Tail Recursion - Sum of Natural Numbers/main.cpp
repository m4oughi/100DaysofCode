#include <iostream>

// Tail-recursive function to calculate sum
int sumTailRec(int n, int acc = 0) {
    if (n == 0)  // Base case
        return acc;
    else
        return sumTailRec(n - 1, acc + n);  // Recursive case with accumulator
}

int main() {
    std::cout << "Sum of first 10 natural numbers: " << sumTailRec(10) << std::endl;
    return 0;
}
