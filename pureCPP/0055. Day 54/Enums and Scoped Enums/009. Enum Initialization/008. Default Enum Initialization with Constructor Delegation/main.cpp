#include <iostream>

enum class LogLevel { Debug, Info, Warning, Error };

class Logger {
public:
    Logger() : level(LogLevel::Info) {}

    void setLevel(LogLevel lvl) {
        level = lvl;
    }

private:
    LogLevel level;
};

int main() {
    Logger log;
    std::cout << "Logger created with default level.\n";
}
