#include <iostream>
#include <bitset>

enum class DebugMode {
    None = 0,
    Log   = 1,
    Trace = 2,
    Error = 4
};

int main() {
    std::bitset<8> flags;

    flags.set(static_cast<int>(DebugMode::Log));
    flags.set(static_cast<int>(DebugMode::Error));

    if (flags.test(static_cast<int>(DebugMode::Error))) {
        std::cout << "Error logging is enabled.\n";
    }
}
