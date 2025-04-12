#include <iostream>

enum Severity { Info = 0, Warning = 1, Error = 2 };

void logMessage(int level) {
    if (level == 1) {
        std::cout << "Warning Message\n";
    }
}

int main() {
    Severity s = Warning;
    logMessage(s); // Implicitly passed as int
}
