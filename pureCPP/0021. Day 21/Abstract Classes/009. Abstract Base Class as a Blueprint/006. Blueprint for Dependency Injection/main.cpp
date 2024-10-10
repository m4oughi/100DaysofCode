#include <iostream>
using namespace std;

// Abstract Base Class (Blueprint)
class Logger {
public:
    virtual void log(const string& message) = 0;
};

class FileLogger : public Logger {
public:
    void log(const string& message) override {
        cout << "Logging to a file: " << message << endl;
    }
};

class ConsoleLogger : public Logger {
public:
    void log(const string& message) override {
        cout << "Logging to console: " << message << endl;
    }
};

class Application {
private:
    Logger* logger;
public:
    Application(Logger* logger) : logger(logger) {}
    
    void run() {
        logger->log("Application started");
    }
};

int main() {
    ConsoleLogger consoleLogger;
    FileLogger fileLogger;

    Application app1(&consoleLogger);
    app1.run();  // Outputs "Logging to console: Application started"

    Application app2(&fileLogger);
    app2.run();  // Outputs "Logging to a file: Application started"

    return 0;
}
