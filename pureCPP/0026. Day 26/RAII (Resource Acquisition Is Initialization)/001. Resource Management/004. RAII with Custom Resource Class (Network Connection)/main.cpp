#include <iostream>

class NetworkConnection {
    bool connected;

public:
    NetworkConnection() {
        // Simulating network connection establishment
        connected = true;
        std::cout << "Network connection established." << std::endl;
    }

    ~NetworkConnection() {
        if (connected) {
            // Simulating network disconnection
            std::cout << "Network connection closed." << std::endl;
        }
    }

    void sendData(const std::string& data) {
        if (connected) {
            std::cout << "Data sent: " << data << std::endl;
        } else {
            std::cout << "Unable to send data. No connection." << std::endl;
        }
    }
};

int main() {
    {
        NetworkConnection connection;
        connection.sendData("Hello, Network!");
    }  // Network connection is automatically closed when `connection` goes out of scope.
}
