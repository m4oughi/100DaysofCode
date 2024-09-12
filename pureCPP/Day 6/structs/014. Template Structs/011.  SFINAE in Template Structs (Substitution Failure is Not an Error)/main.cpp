#include <iostream>
#include <type_traits>

template <typename T, typename = void>
struct SFINAEExample {
    void show() const {
        std::cout << "Default show function\n";
    }
};

// Specialization for integral types
template <typename T>
struct SFINAEExample<T, typename std::enable_if<std::is_integral<T>::value>::type> {
    void show() const {
        std::cout << "Integral type specialization\n";
    }
};

int main() {
    SFINAEExample<int> intObj;
    intObj.show();  // Calls specialized version
    
    SFINAEExample<double> doubleObj;
    doubleObj.show();  // Calls default version
}
