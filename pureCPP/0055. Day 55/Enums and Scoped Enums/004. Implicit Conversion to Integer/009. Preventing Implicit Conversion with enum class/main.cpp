#include <iostream>

enum class LogLevel { Info = 0, Debug = 1, Error = 2 };

void printLog(LogLevel level) {
    // log code here
}

void printLog(int level) = delete; // Disallow int overload

int main() {
    printLog(LogLevel::Debug);
    // printLog(1); // ❌ Won’t compile: safeguards against accidental usage
}
