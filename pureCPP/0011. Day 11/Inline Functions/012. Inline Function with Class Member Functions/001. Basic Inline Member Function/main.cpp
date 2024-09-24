#include <iostream>

class Math {
public:
    // Inline member function defined inside the class
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Math math;
    std::cout << "Sum: " << math.add(3, 4) << std::endl; // Output: Sum: 7
    return 0;
}
