#include <iostream>

int main() {
    // A simple lambda with no capture and no parameters
    []() { std::cout << "Hello, World!" << std::endl; }();
    return 0;
}
