#include <iostream>

struct BasicTypedef {
    typedef int MyInt;  // Typedef inside struct
    MyInt x;
};

int main() {
    BasicTypedef obj;
    obj.x = 10;
    std::cout << "Value: " << obj.x << std::endl;
}
