#include <iostream>

enum class ConnectionStatus { Connected, Disconnected, Timeout };

int main() {
    ConnectionStatus status = ConnectionStatus::Timeout;

    if (status == ConnectionStatus::Timeout) {
        std::cout << "Connection timed out.\n";
    }

    // if (status == 2) {} // ❌ Illegal without cast
}
