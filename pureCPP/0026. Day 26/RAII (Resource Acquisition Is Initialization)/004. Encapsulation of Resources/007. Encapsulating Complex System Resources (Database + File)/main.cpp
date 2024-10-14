#include <iostream>
#include <fstream>

class DatabaseAndFileRAII {
    bool dbConnected;
    std::ofstream logFile;

public:
    DatabaseAndFileRAII(const std::string& logFilename) {
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

    ~DatabaseAndFileRAII() {
        if (dbConnected) {
            std::cout << "Database connection closed." << std::endl;
        }

        if (logFile.is_open()) {
            logFile.close();
            std::cout << "Log file closed." << std::endl;
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
        DatabaseAndFileRAII system("log.txt");
        system.log("System started successfully.");
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }  // Resources are released automatically when the `system` goes out of scope.
}
