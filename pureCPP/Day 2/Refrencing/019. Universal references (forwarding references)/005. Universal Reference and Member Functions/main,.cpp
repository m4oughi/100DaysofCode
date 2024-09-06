#include <iostream>
#include <utility>  // For std::forward

class MyClass {
public:
    template<typename T>
    void setValue(T&& value) {
        // Forward the value to internal setter
        setInternalValue(std::forward<T>(value));
    }

private:
    void setInternalValue(int&& value) {
        std::cout << "rvalue internal value: " << value << std::endl;
    }

    void setInternalValue(const int& value) {
        std::cout << "lvalue internal value: " << value << std::endl;
    }
};

int main() {
    MyClass obj;
    int x = 10;
    obj.setValue(x);       // lvalue, calls setInternalValue(const int&)
    obj.setValue(20);      // rvalue, calls setInternalValue(int&&)

    return 0;
}
