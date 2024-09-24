#include <iostream>

template <typename T>
class Math {
public:
    // Inline member function for addition
    inline T add(T a, T b) {
        return a + b;
    }
};

int main() {
    Math<int> intMath;
    Math<double> doubleMath;
    std::cout << "Integer Sum: " << intMath.add(2, 3) << std::endl;       // Output: 5
    std::cout << "Double Sum: " << doubleMath.add(2.5, 3.5) << std::endl; // Output: 6.0
    return 0;
}
