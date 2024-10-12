#include <iostream>
using namespace std;

class SystemState {
private:
    static bool systemRunning;

public:
    static void startSystem() {
        systemRunning = true;
        cout << "System started!" << endl;
    }

    static void stopSystem() {
        systemRunning = false;
        cout << "System stopped!" << endl;
    }

    static bool isSystemRunning() {
        return systemRunning;
    }
};

// Initialize static member
bool SystemState::systemRunning = false;

int main() {
    // Access system state globally without a global variable
    SystemState::startSystem();  // Output: System started!

    if (SystemState::isSystemRunning()) {
        cout << "System is currently running." << endl;  // Output: System is currently running.
    }

    SystemState::stopSystem();  // Output: System stopped!

    return 0;
}
