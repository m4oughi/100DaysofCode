#include <iostream>

class MyObject {
public:
    int value;
};

MyObject& createObject() {
    static MyObject obj;  // Static object
    obj.value = 100;
    return obj;
}

int main() {
    MyObject &ref = createObject();  // ref refers to the static object
    ref.value = 200;  // Modify the object
    std::cout << createObject().value << std::endl;  // Output: 200

    return 0;
}