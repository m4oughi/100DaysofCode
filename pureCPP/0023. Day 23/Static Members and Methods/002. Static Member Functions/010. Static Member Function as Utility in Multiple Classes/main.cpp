#include <iostream>
using namespace std;

class Utility {
public:
    static int max(int a, int b) {
        return (a > b) ? a : b;
    }
};

class Game {
public:
    void compareScores(int score1, int score2) {
        cout << "Higher score: " << Utility::max(score1, score2) << endl;
    }
};

class Competition {
public:
    void compareResults(int result1, int result2) {
        cout << "Better result: " << Utility::max(result1, result2) << endl;
    }
};

int main() {
    Game game;
    Competition competition;

    game.compareScores(50, 70);  // Output: Higher score: 70
    competition.compareResults(100, 95);  // Output: Better result: 100

    return 0;
}
