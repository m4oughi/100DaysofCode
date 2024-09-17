#include <iostream>

// Function declaration with pointer return type
int* findMax(int* a, int* b);

int main() {
    int x = 5, y = 10;
    int* max = findMax(&x, &y);  // Function call with pointer return type
    std::cout << "Maximum: " << *max << std::endl;
    return 0;
}

// Function definition with pointer return type
int* findMax(int* a, int* b) {
    return (*a > *b) ? a : b;  // Returns pointer to the larger number
}
