#include <iostream>

class MyClass {
public:
    void display() const {
        std::cout << "Const display" << std::endl;
    }

    void display() {
        std::cout << "Non-const display" << std::endl;
    }
};

int main() {
    MyClass obj;
    const MyClass constObj;

    obj.display();       // Calls non-const version
    constObj.display(); // Calls const version

    return 0;
}
