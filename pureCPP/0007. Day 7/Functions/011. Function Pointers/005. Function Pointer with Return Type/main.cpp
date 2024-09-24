#include <iostream>

// Function that returns a function pointer
int (*getOperation(char op))(int, int) {
    if (op == '+') return add;
    else if (op == '-') return subtract;
    else return nullptr;  // Return null if no match
}

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
    int (*operation)(int, int) = getOperation('+');
    std::cout << "Operation result: " << operation(10, 5) << std::endl;
    return 0;
}
