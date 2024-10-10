#include <iostream>
using namespace std;

// Abstract Interface
class Logger {
public:
    virtual void logMessage(const string& message) = 0;  // Pure virtual function
};

class ConsoleLogger : public Logger {
public:
    void logMessage(const string& message) override {
        cout << "Logging to console: " << message << endl;
    }
};

class FileLogger : public Logger {
public:
    void logMessage(const string& message) override {
        cout << "Logging to file: " << message << endl;
    }
};

int main() {
    Logger* logger = new ConsoleLogger();
    logger->logMessage("Hello World!");  // Outputs "Logging to console: Hello World!"

    delete logger;  // Clean up memory
    return 0;
}
