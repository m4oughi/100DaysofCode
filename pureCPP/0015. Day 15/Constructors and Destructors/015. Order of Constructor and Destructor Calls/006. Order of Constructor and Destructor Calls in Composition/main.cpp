#include <iostream>

class Member {
public:
    Member() {
        std::cout << "Member constructor called." << std::endl;
    }

    ~Member() {
        std::cout << "Member destructor called." << std::endl;
    }
};

class MyClass {
private:
    Member member;
public:
    MyClass() {
        std::cout << "MyClass constructor called." << std::endl;
    }

    ~MyClass() {
        std::cout << "MyClass destructor called." << std::endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}
