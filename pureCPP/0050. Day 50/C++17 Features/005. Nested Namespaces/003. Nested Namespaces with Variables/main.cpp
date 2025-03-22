#include <iostream>

namespace Config::Settings {
    inline int maxUsers = 100;
}

int main() {
    std::cout << "Max Users: " << Config::Settings::maxUsers << '\n';
    return 0;
}
