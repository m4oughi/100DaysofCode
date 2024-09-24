#include <iostream>

template<typename T>
class Wrapper {
public:
    T value;

    Wrapper(T &&val) : value(std::forward<T>(val)) {}

    T& getValue() { return value; }
};

int main() {
    Wrapper<int> wrapper1(80);  // Use r-value reference
    Wrapper<int&> wrapper2(wrapper1.getValue());  // Use l-value reference

    std::cout << wrapper1.getValue() << " " << wrapper2.getValue() << std::endl;  // Output: 80 80

    return 0;
}