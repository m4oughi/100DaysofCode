#include <iostream>

class NetworkConnectionRAII {
    bool connected;

public:
    NetworkConnectionRAII() {
        // Simulate network connection
        connected = true;
        std::cout << "Network connection established automatically." << std::endl;
    }

    ~NetworkConnectionRAII() {
        if (connected) {
            // Simulate network disconnection
            std::cout << "Network connection closed automatically." << std::endl;
        }
    }

    void sendData(const std::string& data) {
        if (connected) {
            std::cout << "Data sent: " << data << std::endl;
        }
    }
};

int main() {
    {
        NetworkConnectionRAII connection;
        connection.sendData("Hello, Network!");
    }  // Network connection is closed automatically here.
}
