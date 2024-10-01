#include <iostream>

class OuterClass {
private:
    OuterClass(int x) {  // Private constructor
        std::cout << "Private constructor of OuterClass called with value: " << x << std::endl;
    }

    friend class InnerClass;  // InnerClass is a friend of OuterClass

public:
    class InnerClass {
    public:
        OuterClass createOuterObject(int x) {  // InnerClass can access private constructor
            return OuterClass(x);
        }
    };
};

int main() {
    OuterClass::InnerClass innerObj;
    OuterClass outerObj = innerObj.createOuterObject(50);  // Creating OuterClass object via InnerClass
    return 0;
}
