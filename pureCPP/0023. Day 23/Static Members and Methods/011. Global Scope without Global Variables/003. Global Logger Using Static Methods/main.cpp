#include <iostream>
using namespace std;

class Logger {
public:
    static void log(const string& message) {
        cout << "LOG: " << message << endl;
    }
};

int main() {
    // Calling static method without global variable
    Logger::log("Application started");  // Output: LOG: Application started
    Logger::log("User logged in");       // Output: LOG: User logged in
    return 0;
}
