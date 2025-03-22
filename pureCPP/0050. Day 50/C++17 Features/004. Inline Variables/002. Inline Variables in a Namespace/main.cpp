#include <iostream>

namespace GlobalConfig {
    inline int maxUsers = 100;  // Inline variable in a namespace
}

int main() {
    std::cout << "Max Users: " << GlobalConfig::maxUsers << '\n';
    return 0;
}
