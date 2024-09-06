#include <iostream>

class MyClass {
public:
    void process() & {  // l-value reference
        auto lambda = [this]() {
            std::cout << "Lambda in l-value context" << std::endl;
        };
        lambda();
    }

    void process() && {  // r-value reference
        auto lambda = [this]() {
            std::cout << "Lambda in r-value context" << std::endl;
        };
        lambda();
    }
};

int main() {
    MyClass obj;
    obj.process();  // Calls l-value lambda

    MyClass().process();  // Calls r-value lambda
}
