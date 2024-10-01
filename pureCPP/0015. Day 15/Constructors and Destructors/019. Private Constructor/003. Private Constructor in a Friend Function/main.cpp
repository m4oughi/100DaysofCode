#include <iostream>

class MyClass {
private:
    MyClass() {  // Private constructor
        std::cout << "Private constructor called" << std::endl;
    }

public:
    friend MyClass createObject();  // Friend function declaration
};

MyClass createObject() {
    return MyClass();  // Friend function can access the private constructor
}

int main() {
    MyClass obj = createObject();  // Object creation via friend function
    return 0;
}
