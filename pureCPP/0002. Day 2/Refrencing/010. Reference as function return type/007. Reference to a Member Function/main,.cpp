#include <iostream>

class MyClass {
public:
    void memberFunction() {
        std::cout << "Member function called" << std::endl;
    }

    void (&getMemberFunction())() {
        return memberFunction;  // Return reference to member function
    }
};

int main() {
    MyClass obj;
    void (&funcRef)() = obj.getMemberFunction();  // funcRef refers to obj.memberFunction
    funcRef();  // Calls obj.memberFunction

    return 0;
}