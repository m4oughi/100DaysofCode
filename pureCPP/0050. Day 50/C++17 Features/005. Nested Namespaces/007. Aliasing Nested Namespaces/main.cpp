#include <iostream>

namespace Networking::HTTP {
    void request() {
        std::cout << "Making HTTP request\n";
    }
}

namespace Net = Networking::HTTP;  // Alias for nested namespace

int main() {
    Net::request();
    return 0;
}
