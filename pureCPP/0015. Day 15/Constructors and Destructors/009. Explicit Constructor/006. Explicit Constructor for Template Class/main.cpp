#include <iostream>

template<typename T>
class Wrapper {
private:
    T value;
public:
    // Explicit constructor for template class
    explicit Wrapper(T v) : value(v) {
        std::cout << "Wrapper created with value: " << value << std::endl;
    }

    T getValue() const {
        return value;
    }
};

int main() {
    Wrapper<int> w1(10);  // Allowed, explicit constructor called
    std::cout << "Wrapped value: " << w1.getValue() << std::endl;

    // Wrapper<int> w2 = 20;  // Error: Implicit conversion is not allowed due to explicit constructor

    Wrapper<std::string> w3(std::string("Hello"));  // Explicitly constructs with std::string
    std::cout << "Wrapped string: " << w3.getValue() << std::endl;
    
    return 0;
}
