#include <iostream>

class Math {
public:
    // Declaration of an inline member function
    int add(int a, int b);
};

// Definition of the inline member function outside the class
inline int Math::add(int a, int b) {
    return a + b;
}

int main() {
    Math math;
    std::cout << "Sum: " << math.add(5, 6) << std::endl; // Output: Sum: 11
    return 0;
}
