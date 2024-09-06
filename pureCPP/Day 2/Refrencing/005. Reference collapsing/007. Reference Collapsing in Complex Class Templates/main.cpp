#include <iostream>

template<typename T>
class Wrapper {
public:
    Wrapper(T&& param) : ref(std::forward<T>(param)) {}

    void printType() const {
        if constexpr (std::is_lvalue_reference_v<T>) {
            std::cout << "L-value reference" << std::endl;
        } else {
            std::cout << "R-value reference" << std::endl;
        }
    }

private:
    T ref;  // Collapses based on T
};

int main() {
    int x = 120;
    Wrapper<int&> w1(x);   // Collapses to L-value reference
    w1.printType();         // Output: L-value reference

    Wrapper<int&&> w2(130); // Collapses to R-value reference
    w2.printType();         // Output: R-value reference

    return 0;
}