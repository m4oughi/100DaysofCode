#include <iostream>

namespace Config {
    class Settings {
    public:
        static int value; // Static member declaration
    };
}

int Config::Settings::value = 42; // Static member definition

int main() {
    std::cout << "Setting value: " << Config::Settings::value << std::endl; // Accessing static member
    return 0;
}
