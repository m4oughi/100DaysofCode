#include <iostream>

class MyClass {
public:
    int data;

    auto& getData() {
        return data;  // auto& deduces that the return type is int&
    }
};

int main() {
    MyClass obj;
    obj.data = 50;
    auto& ref = obj.getData();  // ref is an l-value reference to obj.data
    ref = 60;  // Modify obj.data
    std::cout << obj.data << std::endl;  // Output: 60

    return 0;
}