#include <iostream>
#include <tuple>

enum class LogLevel {
    Info,
    Warning,
    Error
};

template <LogLevel L>
struct Logger;

template <>
struct Logger<LogLevel::Info> {
    void log() {
        std::cout << "Info level log\n";
    }
};

template <>
struct Logger<LogLevel::Warning> {
    void log() {
        std::cout << "Warning level log\n";
    }
};

template <>
struct Logger<LogLevel::Error> {
    void log() {
        std::cout << "Error level log\n";
    }
};

int main() {
    std::tuple<Logger<LogLevel::Info>, Logger<LogLevel::Warning>, Logger<LogLevel::Error>> loggers;
    std::get<0>(loggers).log();  // Output: Info level log
    std::get<1>(loggers).log();  // Output: Warning level log
    std::get<2>(loggers).log();  // Output: Error level log
    return 0;
}
