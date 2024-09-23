#include <iostream>

class MyClass {
public:
    int x = 10, y = 20;

    void showValues() {
        auto lambda1 = [this]() {
            std::cout << "x: " << x << std::endl;
        };

        auto lambda2 = [this]() {
            std::cout << "y: " << y << std::endl;
        };

        lambda1(); // Outputs: x: 10
        lambda2(); // Outputs: y: 20
    }
};

int main() {
    MyClass obj;
    obj.showValues();
    return 0;
}
