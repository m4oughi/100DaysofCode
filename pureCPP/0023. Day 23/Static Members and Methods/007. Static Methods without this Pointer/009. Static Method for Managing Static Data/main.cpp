#include <iostream>
using namespace std;

class Database {
private:
    static int connectionCount;  // Static data member

public:
    static void connect() {  // Static method to modify static member
        connectionCount++;
        cout << "Connection established. Total connections: " << connectionCount << endl;
    }

    static int getConnectionCount() {  // Static method to access static member
        return connectionCount;
    }
};

// Initialize static data member
int Database::connectionCount = 0;

int main() {
    Database::connect();  // Call static method without object
    Database::connect();

    cout << "Current connections: " << Database::getConnectionCount() << endl;  // Output: 2
    return 0;
}
