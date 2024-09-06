#include <iostream>

class MyClass {
    int* data;
public:
    MyClass() : data(new int(400)) {}
    ~MyClass() { delete data; }
    int& getData() { return *data; }
};

int main() {
    MyClass obj;
    int& ref = obj.getData();  // Safe reference
    std::cout << "Data: " << ref << std::endl;

    // If obj is destroyed, ref becomes dangling

    return 0;
}
