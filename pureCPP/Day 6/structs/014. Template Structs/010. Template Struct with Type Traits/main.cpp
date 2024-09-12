#include <iostream>
#include <type_traits>

template <typename T>
struct TypeTraitTemplate {
    void checkType() const {
        if (std::is_integral<T>::value) {
            std::cout << "T is an integral type\n";
        } else {
            std::cout << "T is not an integral type\n";
        }
    }
};

int main() {
    TypeTraitTemplate<int> intStruct;
    intStruct.checkType();
    
    TypeTraitTemplate<double> doubleStruct;
    doubleStruct.checkType();
}
