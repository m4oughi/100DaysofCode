#include <iostream>
using namespace std;

// Abstract Class 1
class Logger {
public:
    virtual void log() = 0;
    virtual ~Logger() {
        cout << "Logger Destructor" << endl;
    }
};

// Abstract Class 2
class ErrorHandler {
public:
    virtual void handleError() = 0;
    virtual ~ErrorHandler() {
        cout << "ErrorHandler Destructor" << endl;
    }
};

// Derived Class
class Application : public Logger, public ErrorHandler {
public:
    void log() override {
        cout << "Application logging data" << endl;
    }
    void handleError() override {
        cout << "Application handling error" << endl;
    }
    ~Application() override {
        cout << "Application Destructor" << endl;
    }
};

int main() {
    Logger* app = new Application();
    app->log();    // Outputs: Application logging data
    delete app;    // Properly calls Application, Logger, and ErrorHandler destructors

    return 0;
}
