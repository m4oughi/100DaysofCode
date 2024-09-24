#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    // Non-const version
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // Const version
    MyClass& operator=(const MyClass& other) const {
        // Normally, const assignment operator is not valid. This is just for demonstration.
        std::cout << "Const assignment operator, cannot modify" << std::endl;
        return const_cast<MyClass&>(*this);
    }

    void printValue() const {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    obj1 = obj2; // Calls non-const operator=
    obj1.printValue(); // Prints 20

    const MyClass obj3(30);
    obj1 = obj3; // Calls const operator= (demonstration purpose)

    return 0;
}
