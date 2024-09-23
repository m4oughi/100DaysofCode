#include <iostream>
#include <vector>

class MyClass {
public:
    static int counter;
    void staticLambda() {
        auto lambda = [this]() {
            counter++;
            std::cout << "Counter: " << counter << std::endl;
        };
        lambda();
    }
};

int MyClass::counter = 0;

int main() {
    MyClass obj;
    obj.staticLambda(); // Outputs: Counter: 1
    obj.staticLambda(); // Outputs: Counter: 2
    return 0;
}
