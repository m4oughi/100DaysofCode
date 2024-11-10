#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>
#include <string>

class Logger {
private:
    std::ofstream logFile;
    std::mutex mtx;

public:
    Logger(const std::string& filename) : logFile(filename) {}

    void log(const std::string& message) {
        std::lock_guard<std::mutex> lock(mtx); // Guard file access
        logFile << message << "\n";
    }

    ~Logger() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }
};

void writeLog(Logger& logger, int id) {
    for (int i = 0; i < 3; ++i) {
        logger.log("Thread " + std::to_string(id) + " log entry " + std::to_string(i));
    }
}

int main() {
    Logger logger("log.txt");

    std::thread t1(writeLog, std::ref(logger), 1);
    std::thread t2(writeLog, std::ref(logger), 2);

    t1.join();
    t2.join();

    std::cout << "Logging completed.\n";
    return 0;
}
