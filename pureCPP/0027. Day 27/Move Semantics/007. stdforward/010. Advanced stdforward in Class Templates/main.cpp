#include <iostream>
#include <utility>

template <typename T>
class Wrapper {
public:
    T data;

    template <typename U>
    Wrapper(U&& val) : data(std::forward<U>(val)) {
        std::cout << "Constructor called" << std::endl;
    }
};

int main() {
    int x = 10;
    Wrapper<int> obj1(x);      // Lvalue forwarded
    Wrapper<int> obj2(20);     // Rvalue forwarded
}
