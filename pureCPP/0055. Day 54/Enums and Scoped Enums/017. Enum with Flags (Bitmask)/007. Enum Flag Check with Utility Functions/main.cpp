#include <iostream>

enum class ConfigFlag : int {
    None        = 0,
    Debug       = 1 << 0,
    Verbose     = 1 << 1,
    Performance = 1 << 2,
    All         = Debug | Verbose | Performance
};

bool hasFlag(ConfigFlag flags, ConfigFlag flagToCheck) {
    return (static_cast<int>(flags) & static_cast<int>(flagToCheck)) != 0;
}

int main() {
    ConfigFlag config = ConfigFlag::Debug | ConfigFlag::Verbose;

    if (hasFlag(config, ConfigFlag::Debug)) {
        std::cout << "Debug mode is enabled.\n";
    }

    if (!hasFlag(config, ConfigFlag::Performance)) {
        std::cout << "Performance mode is not enabled.\n";
    }

    return 0;
}
