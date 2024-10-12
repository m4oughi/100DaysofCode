#include <iostream>
using namespace std;

class Game {
public:
    static int highScore;  // Static data member

    static void updateHighScore(int score) {
        if (score > highScore) {
            highScore = score;
        }
    }
};

// Initialize static data member
int Game::highScore = 100;

void playGame() {
    // Access static member via class inside a function
    Game::updateHighScore(200);
}

int main() {
    playGame();  // Call function that accesses static member
    cout << "New high score: " << Game::highScore << endl;  // Output: 200

    return 0;
}
