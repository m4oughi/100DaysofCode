#include <iostream>

class MyClass {
private:
    MyClass() {  // Private constructor
        std::cout << "Private constructor called" << std::endl;
    }

public:
    friend class MyFriendClass;  // Declare MyFriendClass as a friend
};

class MyFriendClass {
public:
    MyClass createObject() {  // MyFriendClass can access private constructor
        MyClass obj;
        return obj;
    }
};

int main() {
    MyFriendClass friendObj;
    MyClass obj = friendObj.createObject();  // Creating an object through a friend class
    return 0;
}
