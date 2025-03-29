#include <iostream>
#include <string>

constexpr std::string makeGreeting() {
    std::string greeting = "Hello";
    greeting += ", constexpr World!";
    return greeting;
}

int main() {
    constexpr auto message = makeGreeting();
    std::cout << message << "\n";
}
