#include <iostream>
#include <format>

int main() {
    std::u8string name = u8"🚀 Rocket";
    std::string message = std::format("Hello, {}!", reinterpret_cast<const char*>(name.c_str()));

    std::cout << message << "\n";
    return 0;
}
