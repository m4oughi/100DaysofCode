#include <iostream>
#include <array>

int main() {
    std::array<const char*, 3> greetings = {"Hello", "Hi", "Hey"};

    for (const auto& greet : greetings) {
        std::cout << greet << std::endl; // Prints "Hello" "Hi" "Hey"
    }
}
