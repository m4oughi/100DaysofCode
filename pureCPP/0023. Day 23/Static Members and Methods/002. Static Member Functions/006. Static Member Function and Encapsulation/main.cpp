#include <iostream>
using namespace std;

class ScoreTracker {
private:
    static int highScore;  // Encapsulated static data

public:
    static void updateHighScore(int score) {
        if (score > highScore) {
            highScore = score;
        }
    }

    static void showHighScore() {
        cout << "Current high score: " << highScore << endl;
    }
};

// Initialize static data member
int ScoreTracker::highScore = 0;

int main() {
    ScoreTracker::updateHighScore(90);
    ScoreTracker::showHighScore();  // Output: Current high score: 90

    ScoreTracker::updateHighScore(95);
    ScoreTracker::showHighScore();  // Output: Current high score: 95

    return 0;
}
