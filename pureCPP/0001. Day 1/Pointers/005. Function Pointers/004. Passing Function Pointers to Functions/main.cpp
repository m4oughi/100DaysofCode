#include <iostream>

// A simple function that takes two integers and returns their sum
int add(int a, int b) { return a + b; }

// A function that takes a function pointer as a parameter
int compute(int x, int y, int (*operation)(int, int)) {
    return operation(x, y);
}

int main() {
    int result = compute(10, 5, add);  // Pass the 'add' function to 'compute'
    std::cout << "Result: " << result << std::endl;  // Output: Result: 15

    return 0;
}
