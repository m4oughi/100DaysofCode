#include <iostream>

class MyClass {
private:
    int value;
    MyClass(int x) : value(x) {  // Private constructor with parameter
        std::cout << "Private constructor called with value: " << value << std::endl;
    }

public:
    friend MyClass createObject(int x);  // Friend function declaration
};

MyClass createObject(int x) {
    MyClass obj(x);  // Accessing private constructor with argument
    return obj;
}

int main() {
    MyClass obj = createObject(10);  // Calling friend function with parameter
    return 0;
}
