#include <iostream>

int main() {
    int numbers[6] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = &numbers[1]; // Points to numbers[1] (20)
    int *ptr2 = &numbers[4]; // Points to numbers[4] (50)

    // Calculate the difference between the two pointers
    int distance = ptr2 - ptr1;                                               // Distance in elements
    std::cout << "Distance between ptr2 and ptr1: " << distance << std::endl; // Outputs: 3
}