#include <iostream>

class MyClass {
public:
    void modify() const {
        // const_cast allows modification within a const method
        int& nonConstValue = const_cast<int&>(value);
        nonConstValue = 100;
    }

    int getValue() const { return value; }

private:
    int value = 0;
};

int main() {
    const MyClass obj;
    obj.modify();
    std::cout << "Value: " << obj.getValue() << std::endl; // Prints 100 (undefined behavior, but shows modification)
}
