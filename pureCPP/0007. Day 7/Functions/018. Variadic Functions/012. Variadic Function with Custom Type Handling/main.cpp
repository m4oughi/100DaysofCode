#include <iostream>

class CustomType {
public:
    int value;
    CustomType(int v) : value(v) {}
};

template<typename T>
void printCustomType(T value) {
    if constexpr (std::is_same<T, CustomType>::value) {
        std::cout << "CustomType with value: " << value.value << std::endl;
    } else {
        std::cout << value << std::endl;
    }
}

template<typename... Args>
void handleCustomTypes(Args... args) {
    (printCustomType(args), ...);  // Handle custom types and normal types
}

int main() {
    CustomType ct(10);
    handleCustomTypes(1, 2.5, "Hello", ct);
    
    return 0;
}
