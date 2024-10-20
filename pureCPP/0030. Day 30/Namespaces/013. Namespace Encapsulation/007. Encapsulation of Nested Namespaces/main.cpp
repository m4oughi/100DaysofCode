#include <iostream>

namespace Game {
    namespace Player {
        void move() {
            std::cout << "Player moving" << std::endl;
        }
    }

    namespace Enemy {
        void move() {
            std::cout << "Enemy moving" << std::endl;
        }
    }
}

int main() {
    Game::Player::move();  // Calls Player move
    Game::Enemy::move();   // Calls Enemy move
    return 0;
}
