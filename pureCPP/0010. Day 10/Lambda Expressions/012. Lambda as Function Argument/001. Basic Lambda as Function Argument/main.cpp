#include <iostream>

void greet(const std::function<void()>& func) {
    func(); // Call the lambda function
}

int main() {
    greet([]() {
        std::cout << "Hello, World!" << std::endl;
    });
    return 0;
}
