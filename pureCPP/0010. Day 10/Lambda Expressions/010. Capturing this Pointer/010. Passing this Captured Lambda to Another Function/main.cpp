#include <iostream>
#include <functional>

class MyClass {
public:
    int value = 10;

    void callFunction(std::function<void()> func) {
        func();
    }

    void execute() {
        callFunction([this]() {
            value += 5;
            std::cout << "Value inside lambda: " << value << std::endl;
        });
    }
};

int main() {
    MyClass obj;
    obj.execute(); // Outputs: Value inside lambda: 15
    return 0;
}
