#include <iostream>
#include <type_traits>

template<typename T>
class MyClass {
public:
    void doSomething() noexcept(std::is_integral<T>::value) {
        if (!std::is_integral<T>::value) {
            std::cout << "Throwing in template class because T is not integral." << std::endl;
            throw std::runtime_error("Exception!");
        } else {
            std::cout << "T is integral, no exception." << std::endl;
        }
    }
};

int main() {
    MyClass<int> obj1;  // Integral type
    obj1.doSomething();

    try {
        MyClass<double> obj2;  // Non-integral type
        obj2.doSomething();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
