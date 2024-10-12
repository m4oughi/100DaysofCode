#include <iostream>
using namespace std;

class Database {
public:
    static int connectionCount;  // Static data member
};

// Initialize static data member
int Database::connectionCount = 0;

void connectDatabase() {
    // Access static member via class in a different context
    Database::connectionCount++;
}

int main() {
    // Connect to the database multiple times
    connectDatabase();
    connectDatabase();

    // Access static member via class
    cout << "Total connections: " << Database::connectionCount << endl;  // Output: 2

    return 0;
}
