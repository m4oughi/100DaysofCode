#include <iostream>
using namespace std;

class Logger {
private:
    static int logCount;

public:
    Logger() {
        logCount++;
    }

    ~Logger() {
        logCount--;
    }

    static int getLogCount() {
        return logCount;
    }
};

// Allocate memory for static member
int Logger::logCount = 0;

int main() {
    Logger log1;
    Logger log2;

    cout << "Active logs: " << Logger::getLogCount() << endl;  // Output: 2

    {
        Logger log3;
        cout << "Active logs (inside block): " << Logger::getLogCount() << endl;  // Output: 3
    }

    // Memory for static member persists beyond the scope of log3
    cout << "Active logs (after block): " << Logger::getLogCount() << endl;  // Output: 2

    return 0;
}
