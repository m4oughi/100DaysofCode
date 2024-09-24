#include <iostream>

// Indirect recursive function declarations
void odd(int n);

void even(int n) {
    if (n == 0)
        std::cout << "Even number\n";
    else
        odd(n - 1);  // Calls odd function
}

void odd(int n) {
    if (n == 0)
        std::cout << "Odd number\n";
    else
        even(n - 1);  // Calls even function
}

int main() {
    even(4);  // Will call even -> odd -> even -> odd...
    return 0;
}
