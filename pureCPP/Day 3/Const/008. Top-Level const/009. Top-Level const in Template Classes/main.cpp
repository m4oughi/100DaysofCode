#include <iostream>

template <typename T>
class MyClass {
public:
    MyClass(const T &v) : value(v) {}

    T getValue() const {
        return value;
    }

private:
    const T value; // value is a top-level const
};

int main() {
    MyClass<int> obj(180);
    // obj.value = 190; // NOT allowed: modifying the top-level const member is not allowed
    std::cout << obj.getValue() << std::endl;

    return 0;
}