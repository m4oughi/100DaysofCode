#include <iostream>
#include <thread>
#include <sstream>

class Logger {
public:
    Logger() : logID(0) {}
    void log(const std::string& message) {
        std::stringstream ss;
        ss << "Log " << logID++ << " - " << message;
        std::cout << "Thread " << std::this_thread::get_id() << ": " << ss.str() << std::endl;
    }

private:
    int logID;
};

thread_local Logger logger;

void threadFunction(const std::string& msg) {
    logger.log(msg);
    logger.log("Additional log entry");
}

int main() {
    std::thread t1(threadFunction, "Initializing resources");
    std::thread t2(threadFunction, "Processing data");
    std::thread t3(threadFunction, "Finalizing task");

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
