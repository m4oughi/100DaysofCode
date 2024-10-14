#include <iostream>

class NetworkConnectionRAII {
    bool connected;

public:
    NetworkConnectionRAII() {
        connected = true;
        std::cout << "Network connection established." << std::endl;
    }

    // Destructor releases the network connection automatically.
    ~NetworkConnectionRAII() {
        if (connected) {
            std::cout << "Network connection closed in destructor." << std::endl;
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
    }  // Network connection is closed automatically by the destructor.
}
