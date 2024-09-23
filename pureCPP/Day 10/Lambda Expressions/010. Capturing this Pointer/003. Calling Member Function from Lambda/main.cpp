#include <iostream>

class MyClass {
public:
    void printMessage() {
        std::cout << "Hello from MyClass!" << std::endl;
    }

    void callLambda() {
        auto lambda = [this]() {
            printMessage();
        };
        lambda(); // Outputs: Hello from MyClass!
    }
};

int main() {
    MyClass obj;
    obj.callLambda();
    return 0;
}
