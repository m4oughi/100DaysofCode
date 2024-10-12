#include <iostream>
using namespace std;

class GameSettings {
private:
    static int maxPlayers;    // Private static member
    static double difficulty;  // Another private static member

public:
    // Getter and setter for maxPlayers
    static void setMaxPlayers(int players) {
        if (players > 0) maxPlayers = players;
    }

    static int getMaxPlayers() {
        return maxPlayers;
    }

    // Getter and setter for difficulty
    static void setDifficulty(double level) {
        if (level >= 0.0 && level <= 10.0) difficulty = level;
    }

    static double getDifficulty() {
        return difficulty;
    }
};

// Initialize static members
int GameSettings::maxPlayers = 4;
double GameSettings::difficulty = 5.0;

int main() {
    GameSettings::setMaxPlayers(10);
    GameSettings::setDifficulty(7.5);

    cout << "Max players: " << GameSettings::getMaxPlayers() << endl;  // Output: 10
    cout << "Difficulty level: " << GameSettings::getDifficulty() << endl;  // Output: 7.5

    return 0;
}
