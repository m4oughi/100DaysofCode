#include <iostream>
using namespace std;

class Logger {
public:
    virtual void logMessage(const string& message) = 0;
    // Default implementation for the error function
    virtual void logError(const string& error) {
        cout << "Error: " << error << endl;
    }
};

class FileLogger : public Logger {
public:
    void logMessage(const string& message) override {
        cout << "Logging to file: " << message << endl;
    }
    void logError(const string& error) override {
        cout << "File Error Log: " << error << endl;
    }
};

int main() {
    FileLogger fileLogger;
    fileLogger.logMessage("File operation successful.");
    fileLogger.logError("File not found.");
    return 0;
}
