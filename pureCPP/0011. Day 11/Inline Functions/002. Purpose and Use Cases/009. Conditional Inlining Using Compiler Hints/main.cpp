#include <iostream>

// Inline function with likely branch prediction
inline int addWithHint(int a, int b) {
    if (__builtin_expect(a > b, 1)) { // Hint: likely case
        return a + b;
    }
    return a - b;
}

int main() {
    int result = addWithHint(5, 3); // Compiler expects a > b to be true
    std::cout << "Result: " << result << std::endl; // Output: Result: 8
    return 0;
}
