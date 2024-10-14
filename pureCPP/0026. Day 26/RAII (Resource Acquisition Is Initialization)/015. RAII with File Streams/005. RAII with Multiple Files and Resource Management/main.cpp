#include <iostream>
#include <fstream>

class FileManager {
    std::ofstream logFile;
    std::ofstream errorFile;
public:
    FileManager(const std::string& logFilename, const std::string& errorFilename) {
        logFile.open(logFilename);
        errorFile.open(errorFilename);

        if (!logFile.is_open() || !errorFile.is_open()) {
            throw std::runtime_error("Failed to open files.");
        }
    }

    ~FileManager() {
        if (logFile.is_open()) {
            logFile.close();
        }
        if (errorFile.is_open()) {
            errorFile.close();
        }
    }

    void logMessage(const std::string& message) {
        if (logFile.is_open()) {
            logFile << "Log: " << message << std::endl;
        }
    }

    void logError(const std::string& error) {
        if (errorFile.is_open()) {
            errorFile << "Error: " << error << std::endl;
        }
    }
};

int main() {
    try {
        FileManager manager("log.txt", "error.txt");
        manager.logMessage("This is a log entry.");
        manager.logError("This is an error entry.");
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "File streams managed and closed." << std::endl;
}
