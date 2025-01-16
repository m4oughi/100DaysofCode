#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, STL!";
    std::cout << "String: " << str << "\n";
    std::cout << "Size: " << str.size() << "\n";
    std::cout << "Capacity: " << str.capacity() << "\n";

    str.reserve(50);
    std::cout << "Capacity after reserve: " << str.capacity() << "\n";

    return 0;
}
