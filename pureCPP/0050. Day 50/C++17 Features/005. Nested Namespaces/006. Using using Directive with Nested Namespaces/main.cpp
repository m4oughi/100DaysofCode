#include <iostream>

namespace System::Logs {
    void logMessage() {
        std::cout << "Logging system message\n";
    }
}

using namespace System::Logs;  // Importing namespace

int main() {
    logMessage();  // No need for System::Logs::
    return 0;
}
