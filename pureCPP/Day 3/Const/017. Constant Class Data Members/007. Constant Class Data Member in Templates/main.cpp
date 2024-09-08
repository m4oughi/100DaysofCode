#include <iostream>

template <typename T>
class MyTemplate {
public:
    static const int value = 42;
};

int main() {
    std::cout << MyTemplate<int>::value << std::endl; // Prints 42
}
