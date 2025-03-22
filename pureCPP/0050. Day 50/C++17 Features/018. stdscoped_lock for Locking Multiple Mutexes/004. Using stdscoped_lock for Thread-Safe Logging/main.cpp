#include <iostream>
#include <mutex>
#include <thread>
#include <fstream>

std::mutex logMutex;

void logMessage(const std::string& message) {
    std::scoped_lock lock(logMutex);
    std::ofstream logFile("log.txt", std::ios::app);
    logFile << message << std::endl;
    std::cout << "Logged: " << message << std::endl;
}

int main() {
    std::thread t1(logMessage, "Thread 1: Log entry.");
    std::thread t2(logMessage, "Thread 2: Log entry.");
    
    t1.join();
    t2.join();
    
    return 0;
}
