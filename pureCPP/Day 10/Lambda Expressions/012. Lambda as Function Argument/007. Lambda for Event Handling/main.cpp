#include <iostream>
#include <functional>

void buttonClick(const std::function<void()>& onClick) {
    std::cout << "Button clicked!" << std::endl;
    onClick(); // Invoke the callback
}

int main() {
    buttonClick([]() {
        std::cout << "Action performed on button click!" << std::endl;
    });
    return 0;
}
