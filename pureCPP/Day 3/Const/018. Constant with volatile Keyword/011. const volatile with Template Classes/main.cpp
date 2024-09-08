#include <iostream>

template <typename T>
class MyTemplate {
public:
    static const volatile T value;
};

template <typename T>
const volatile T MyTemplate<T>::value = 600;

int main() {
    std::cout << MyTemplate<int>::value << std::endl; // Prints 600
}
