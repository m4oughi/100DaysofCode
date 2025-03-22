#include <iostream>
#include <string>

struct Logger {
    static inline std::string logLevel = "INFO";
    
    static void log(const std::string& message) {
        std::cout << "[" << logLevel << "] " << message << '\n';
    }
};

int main() {
    Logger::log("Application started.");
    Logger::logLevel = "DEBUG";
    Logger::log("Debugging mode enabled.");
    return 0;
}
