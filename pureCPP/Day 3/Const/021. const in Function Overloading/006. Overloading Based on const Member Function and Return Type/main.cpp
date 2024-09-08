#include <iostream>

class MyClass {
public:
    int getValue() const {
        return 100;
    }

    int getValue() {
        return 200;
    }
};

int main() {
    MyClass obj;
    const MyClass constObj;

    std::cout << "Value from non-const object: " << obj.getValue() << std::endl; // Calls non-const getValue
    std::cout << "Value from const object: " << constObj.getValue() << std::endl; // Calls const getValue
}
