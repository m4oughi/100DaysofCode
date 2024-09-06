#include <iostream>

template<typename T>
void print(T&& value) {  // Universal reference
    std::cout << value << std::endl;
}

int main() {
    int x = 10;
    print(x);           // lvalue reference
    print(20);          // rvalue reference

    return 0;
}
