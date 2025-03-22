#include <iostream>
#include <any>
#include <typeinfo>

int main() {
    std::any value = 100;

    if (value.type() == typeid(int)) {
        std::cout << "Value is an int.\n";
    } else {
        std::cout << "Value is not an int.\n";
    }

    return 0;
}
