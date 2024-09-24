#include <iostream>

class MyClass {
public:
    int value;
};

MyClass&& create() {
    MyClass obj;
    obj.value = 100;
    return std::move(obj);  // Return r-value reference
}

int main() {
    MyClass &&ref1 = create();  // ref1 is an r-value reference to MyClass
    MyClass &&&ref2 = ref1;     // ref2 is an r-value reference to an r-value reference

    std::cout << ref2.value << std::endl;  // Output: 100

    return 0;
}