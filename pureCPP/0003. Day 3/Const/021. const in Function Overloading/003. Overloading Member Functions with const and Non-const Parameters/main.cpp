#include <iostream>

class MyClass {
public:
    void process(int& value) {
        std::cout << "Non-const reference parameter: " << value << std::endl;
    }

    void process(const int& value) const {
        std::cout << "Const reference parameter: " << value << std::endl;
    }
};

int main() {
    MyClass obj;
    int a = 5;
    const int b = 10;

    obj.process(a); // Calls process(int&)
    obj.process(b); // Calls process(const int&) const
}
