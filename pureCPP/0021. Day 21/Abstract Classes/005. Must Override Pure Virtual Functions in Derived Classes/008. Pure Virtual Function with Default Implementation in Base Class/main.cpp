#include <iostream>
using namespace std;

class Logger {
public:
    virtual void logMessage(const string& message) {
        cout << "Log: " << message << endl;
    }
    virtual void logError(const string& error) = 0;  // Pure virtual function
};

class FileLogger : public Logger {
public:
    void logError(const string& error) override {
        cout << "File Error Log: " << error << endl;
    }
};

int main() {
    FileLogger logger;
    logger.logMessage("This is a message");  // Outputs "Log: This is a message"
    logger.logError("This is an error");     // Outputs "File Error Log: This is an error"
    return 0;
}
