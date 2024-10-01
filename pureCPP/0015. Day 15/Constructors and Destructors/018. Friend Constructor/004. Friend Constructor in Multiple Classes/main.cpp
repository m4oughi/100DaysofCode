#include <iostream>

class MyClass {
private:
    MyClass(int x) {
        std::cout << "Private constructor called with value: " << x << std::endl;
    }

public:
    friend class FriendClass1;  // Friend class 1
    friend class FriendClass2;  // Friend class 2
};

class FriendClass1 {
public:
    MyClass createObject1() {
        return MyClass(100);  // Accessing private constructor
    }
};

class FriendClass2 {
public:
    MyClass createObject2() {
        return MyClass(200);  // Accessing private constructor
    }
};

int main() {
    FriendClass1 obj1;
    FriendClass2 obj2;
    
    MyClass myObj1 = obj1.createObject1();  // Creating object via FriendClass1
    MyClass myObj2 = obj2.createObject2();  // Creating object via FriendClass2
    return 0;
}
