#include <iostream>
#include <fstream>

class Logger {
    std::ofstream logFile;
public:
    Logger(const std::string& filename) {
        logFile.open(filename, std::ios::app);
    }

    ~Logger() {
        logFile.close();
    }

    template <typename... Args>
    void log(Args... args) {
        ((logFile << args << " "), ...);
        logFile << std::endl;
    }
};

int main() {
    Logger logger("log.txt");
    logger.log("Error:", 404, "Not Found");
    logger.log("Warning:", "Low disk space");

    return 0;
}
