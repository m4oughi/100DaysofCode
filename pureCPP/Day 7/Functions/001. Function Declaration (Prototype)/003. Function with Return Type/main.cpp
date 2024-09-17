#include <iostream>

// Function declaration (prototype)
int add(int a, int b);

int main() {
    int result = add(5, 3);  // Function call with parameters
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
