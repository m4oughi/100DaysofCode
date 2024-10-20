#include <iostream>

namespace App {
    namespace Network {
        void connect() {
            std::cout << "Connecting to network..." << std::endl;
        }
    }
}

// Extending the nested Network namespace
namespace App {
    namespace Network {
        void disconnect() {
            std::cout << "Disconnecting from network..." << std::endl;
        }
    }
}

int main() {
    App::Network::connect();     // Accessing connect function
    App::Network::disconnect();  // Accessing newly added disconnect function
    return 0;
}
