#include <iostream>

class MyClass {
public:
    // Explicitly declared default constructor
    MyClass() = default;

    void show() {
        std::cout << "Default constructor created an object" << std::endl;
    }
};

int main() {
    MyClass obj;  // Explicitly using the default constructor
    obj.show();
    return 0;
}
