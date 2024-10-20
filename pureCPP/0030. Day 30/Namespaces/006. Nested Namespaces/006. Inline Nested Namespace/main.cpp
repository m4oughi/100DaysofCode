#include <iostream>

namespace Game {
    inline namespace Version1 {
        void play() {
            std::cout << "Playing Game Version 1" << std::endl;
        }
    }

    namespace Version2 {
        void play() {
            std::cout << "Playing Game Version 2" << std::endl;
        }
    }
}

int main() {
    Game::play();  // Calls Version1::play since it is inline
    Game::Version2::play();  // Calls Version2::play explicitly
    return 0;
}
