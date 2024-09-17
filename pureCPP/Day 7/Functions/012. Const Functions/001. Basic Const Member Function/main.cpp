#include <iostream>

class MyClass {
public:
    void show() const {
        std::cout << "This is a const member function." << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.show();  // Call const member function
    return 0;
}
