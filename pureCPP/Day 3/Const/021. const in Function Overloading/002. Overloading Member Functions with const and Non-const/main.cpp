#include <iostream>

class MyClass {
public:
    void display() const {
        std::cout << "Const display function" << std::endl;
    }

    void display() {
        std::cout << "Non-const display function" << std::endl;
    }
};

int main() {
    MyClass obj;
    const MyClass constObj;

    obj.display();      // Calls non-const display
    constObj.display(); // Calls const display
}
