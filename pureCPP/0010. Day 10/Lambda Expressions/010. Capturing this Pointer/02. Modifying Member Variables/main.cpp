#include <iostream>

class MyClass {
public:
    int counter = 0;

    void increment() {
        auto lambda = [this]() {
            counter++;
        };
        lambda();
        std::cout << "Counter: " << counter << std::endl; // Outputs: Counter: 1
    }
};

int main() {
    MyClass obj;
    obj.increment();
    return 0;
}
