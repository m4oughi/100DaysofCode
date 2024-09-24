#include <iostream>

template<typename T>
class Wrapper {
    T value;
public:
    Wrapper(T&& v) : value(std::forward<T>(v)) {}

    void show() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Wrapper<int> w1(10);           // rvalue reference
    Wrapper<int> w2(w1);           // lvalue reference

    w1.show();
    w2.show();

    return 0;
}
