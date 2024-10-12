#include <iostream>
using namespace std;

class Player {
public:
    static int totalPlayers;  // Static member shared among all instances

    Player() {
        totalPlayers++;
    }
};

// Initialize static member outside the class
int Player::totalPlayers = 0;

int main() {
    Player player1, player2, player3;

    // Access static member via class name
    cout << "Total players: " << Player::totalPlayers << endl;  // Output: 3
    return 0;
}
