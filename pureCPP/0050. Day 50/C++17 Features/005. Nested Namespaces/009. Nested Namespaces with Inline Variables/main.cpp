#include <iostream>

namespace Game::Config {
    inline int maxPlayers = 4;
}

int main() {
    std::cout << "Max Players: " << Game::Config::maxPlayers << '\n';
    return 0;
}
