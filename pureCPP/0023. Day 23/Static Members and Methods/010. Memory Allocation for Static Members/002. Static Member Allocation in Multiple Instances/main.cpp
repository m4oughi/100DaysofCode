#include <iostream>
using namespace std;

class Player {
public:
    static int totalPlayers;

    Player() {
        totalPlayers++;
    }

    static int getPlayerCount() {
        return totalPlayers;
    }
};

// Memory allocation for static member
int Player::totalPlayers = 0;

int main() {
    Player p1, p2, p3;
    
    cout << "Total players: " << Player::getPlayerCount() << endl;  // Output: 3
    
    Player p4;
    
    cout << "Total players after creating p4: " << Player::getPlayerCount() << endl;  // Output: 4

    return 0;
}
