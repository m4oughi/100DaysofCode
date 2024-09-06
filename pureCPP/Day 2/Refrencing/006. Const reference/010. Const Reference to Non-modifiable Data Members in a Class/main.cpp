#include <iostream>

class Data {
private:
    int value;

public:
    Data(int val) : value(val) {}

    const int& getValue() const {  // Const reference as return type
        return value;
    }
};

int main() {
    Data d(200);
    const int &ref = d.getValue();  // Bind to a const reference returned by a method
    std::cout << ref << std::endl;  // Output: 200
    // ref = 300;  // Error: Cannot modify the value through ref

    return 0;
}