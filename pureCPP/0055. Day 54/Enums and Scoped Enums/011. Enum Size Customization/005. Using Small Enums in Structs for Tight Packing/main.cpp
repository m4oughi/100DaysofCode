#include <iostream>

enum class Flag : uint8_t { Off = 0, On = 1 };
enum class Mode : uint8_t { Read = 0, Write = 1 };

struct Config {
    Flag power;
    Mode access;
};

int main() {
    Config cfg = {Flag::On, Mode::Write};
    std::cout << "Size of Config struct: " << sizeof(cfg) << " bytes\n";
}
