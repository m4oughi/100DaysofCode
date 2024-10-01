#include <iostream>

class OuterClass {
private:
    OuterClass(int x) {  // Private constructor
        std::cout << "OuterClass created with value: " << x << std::endl;
    }

public:
    class InnerClass {
    public:
        OuterClass createOuterObject(int x) {  // Inner class can access outer class's private constructor
            return OuterClass(x);
        }
    };
};

int main() {
    OuterClass::InnerClass innerObj;
    OuterClass outerObj = innerObj.createOuterObject(50);  // Creating OuterClass object via InnerClass
    return 0;
}
