#include <iostream>
#include <functional>
#include <utility>

void printMessage(std::string msg) {
    std::cout << msg << std::endl;
}

int main() {
    std::string text = "Hello, C++11!";
    std::function<void()> func = std::bind(printMessage, std::move(text));

    func(); // text is moved, cannot be used afterward

    return 0;
}
