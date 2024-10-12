#include <iostream>
using namespace std;

class SessionManager {
public:
    static int activeSessions;  // Static member to track active sessions

    SessionManager() {
        activeSessions++;
    }

    ~SessionManager() {
        activeSessions--;
    }

    static void showActiveSessions() {
        cout << "Active sessions: " << activeSessions << endl;
    }
};

// Initialize static member
int SessionManager::activeSessions = 0;

int main() {
    SessionManager::showActiveSessions();  // Output: 0

    SessionManager session1, session2;
    SessionManager::showActiveSessions();  // Output: 2

    {
        SessionManager session3;
        SessionManager::showActiveSessions();  // Output: 3
    }

    SessionManager::showActiveSessions();  // Output: 2 (after session3 is destroyed)

    return 0;
}
