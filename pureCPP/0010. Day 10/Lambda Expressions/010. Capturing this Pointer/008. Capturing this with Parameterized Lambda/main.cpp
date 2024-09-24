#include <iostream>

class MyClass {
public:
    int factor = 2;

    void multiply(int num) {
        auto lambda = [this](int n) {
            return n * factor;
        };
        std::cout << "Result: " << lambda(num) << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.multiply(5); // Outputs: Result: 10
    return 0;
}
