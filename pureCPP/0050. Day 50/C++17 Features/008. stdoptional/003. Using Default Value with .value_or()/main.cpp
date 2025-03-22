#include <iostream>
#include <optional>

std::optional<std::string> getGreeting(bool morning) {
    if (morning) return "Good Morning!";
    return std::nullopt;
}

int main() {
    std::cout << getGreeting(true).value_or("Hello!") << '\n';
    std::cout << getGreeting(false).value_or("Hello!") << '\n';

    return 0;
}
