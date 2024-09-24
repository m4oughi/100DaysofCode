#include <iostream>
#include <utility>

class MyClass {
public:
    int *data;

    MyClass(int val) : data(new int(val)) {}
    ~MyClass() { delete data; }

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(other.data) {
        other.data = nullptr;
    }
};

void process(MyClass &&obj) {
    std::cout << "Processing object with data: " << *obj.data << std::endl;
}

int main() {
    MyClass obj(100);
    process(std::move(obj));  // Pass by r-value reference

    return 0;
}