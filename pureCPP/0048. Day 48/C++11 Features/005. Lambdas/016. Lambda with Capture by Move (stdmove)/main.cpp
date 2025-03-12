#include <iostream>
#include <string>

int main() {
    std::string message = "Hello, world!";

    auto lambda = [msg = std::move(message)]() {
        std::cout << "Captured message: " << msg << std::endl;
    };

    lambda();

    return 0;
}
