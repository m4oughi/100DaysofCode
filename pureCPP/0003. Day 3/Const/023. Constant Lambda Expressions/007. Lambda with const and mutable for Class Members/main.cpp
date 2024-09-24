#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    void display() const {
        auto lambda = [this]() mutable {
            // mutable allows modification of `value`, which is a class member
            value += 10;
            std::cout << "Modified class member value: " << value << std::endl;
        };

        lambda();
    }

private:
    int value;
};

int main() {
    MyClass obj(80);
    obj.display(); // Prints Modified class member value: 90
}
