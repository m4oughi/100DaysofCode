#include <iostream>
using namespace std;

class Logger {
public:
    virtual void logMessage(const string& message) {
        cout << "Log: " << message << endl;
    }
    virtual void logError(const string& error) = 0;
};

class FileLogger : public Logger {
public:
    void logError(const string& error) override {
        cout << "File Error Log: " << error << endl;
    }
};

int main() {
    Logger* logger = new FileLogger();
    logger->logMessage("A message");    // Uses default implementation
    logger->logError("An error");       // Uses overridden function
    delete logger;
    return 0;
}
