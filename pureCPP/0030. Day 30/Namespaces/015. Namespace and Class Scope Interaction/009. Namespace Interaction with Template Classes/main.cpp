#include <iostream>

namespace Math {
    template<typename T>
    class Calculator {
    public:
        T add(T a, T b) {
            return a + b;
        }
    };
}

int main() {
    Math::Calculator<int> intCalc;          // Creating a Calculator for integers
    std::cout << "Integer sum: " << intCalc.add(5, 10) << std::endl;

    Math::Calculator<double> doubleCalc;    // Creating a Calculator for doubles
    std::cout << "Double sum: " << doubleCalc.add(5.5, 10.5) << std::endl;
    
    return 0;
}
