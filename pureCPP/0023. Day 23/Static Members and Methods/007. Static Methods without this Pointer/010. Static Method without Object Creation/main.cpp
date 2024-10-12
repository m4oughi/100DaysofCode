#include <iostream>
using namespace std;

class Logger {
public:
    static void logMessage(const string& message) {  // Static method
        cout << "Log: " << message << endl;
    }
};

int main() {
    // Call static method without creating an object of Logger
    Logger::logMessage("System started.");  // Output: Log: System started.

    return 0;
}
