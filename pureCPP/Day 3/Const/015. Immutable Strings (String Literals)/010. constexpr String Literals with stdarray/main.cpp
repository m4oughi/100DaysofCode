#include <iostream>
#include <array>

constexpr std::array<const char*, 3> greetings = {"Hello", "Hi", "Hey"};

int main() {
    for (const auto& greet : greetings) {
        std::cout << greet << std::endl; // Prints "Hello" "Hi" "Hey"
    }
}
