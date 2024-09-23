#include <iostream>

class MyClass {
public:
    int value = 5;

    void addValue(int increment = 3) {
        auto lambda = [this](int inc = 2) {
            value += inc;
            std::cout << "Value inside lambda: " << value << std::endl;
        };
        lambda(increment);
    }
};

int main() {
    MyClass obj;
    obj.addValue(); // Outputs: Value inside lambda: 8
    obj.addValue(10); // Outputs: Value inside lambda: 18
    return 0;
}
