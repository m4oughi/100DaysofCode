#include <iostream>
#include <functional>

void greet() {
    std::cout << "Hello, C++11!" << std::endl;
}

int main() {
    std::function<void()> func = greet;
    func();  // Calls greet()

    return 0;
}
