#include <iostream>

template<typename T>
void modify(T &obj) {
    obj += obj;  // Modifies the original object
}

int main() {
    int a = 5;
    modify(a);  // a is modified to 10
    std::cout << a << std::endl;  // Output: 10

    std::string str = "Hello";
    modify(str);  // str is modified to "HelloHello"
    std::cout << str << std::endl;  // Output: HelloHello

    return 0;
}