#include <iostream>
#include <fstream>

class SystemResourceRAII {
    bool dbConnected;
    std::ofstream logFile;

public:
    SystemResourceRAII(const std::string& logFilename) {
        // Simulate database connection
        dbConnected = true;
        std::cout << "Database connection established." << std::endl;

        // Open log file
        logFile.open(logFilename);
        if (!logFile.is_open()) {
            throw std::runtime_error("Failed to open log file.");
        }
        std::cout << "Log file opened." << std::endl;
    }

    // Destructor releases both resources, ensuring exception safety.
    ~SystemResourceRAII() {
        if (dbConnected) {
            std::cout << "Database connection closed in destructor." << std::endl;
        }

        if (logFile.is_open()) {
            logFile.close();
            std::cout << "Log file closed in destructor." << std::endl;
        }
    }

    void log(const std::string& message) {
        if (logFile.is_open()) {
            logFile << message << std::endl;
        }
    }
};

int main() {
    try {
        SystemResourceRAII system("log.txt");
        system.log("System started successfully.");
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }  // Resources are released by the destructor, even in case of exceptions.
}
