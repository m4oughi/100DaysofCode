#include <iostream>
using namespace std;

class Network {
protected:
    static int maxConnections;  // Protected static member

private:
    static int activeConnections;  // Private static member

public:
    static void addConnection() {
        if (activeConnections < maxConnections) {
            activeConnections++;
        }
    }

    static int getActiveConnections() {
        return activeConnections;
    }
};

// Initialize static members
int Network::maxConnections = 100;
int Network::activeConnections = 0;

int main() {
    Network::addConnection();
    Network::addConnection();
    
    cout << "Active connections: " << Network::getActiveConnections() << endl;  // Output: 2
    return 0;
}
