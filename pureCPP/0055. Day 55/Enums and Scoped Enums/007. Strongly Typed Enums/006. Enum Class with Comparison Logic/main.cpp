#include <iostream>

enum class Severity { Info = 1, Warning = 2, Critical = 3 };

void logIfCritical(Severity level) {
    if (static_cast<int>(level) >= static_cast<int>(Severity::Critical)) {
        std::cout << "CRITICAL ERROR!\n";
    }
}

int main() {
    logIfCritical(Severity::Critical);
}
