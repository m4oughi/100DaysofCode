#include <iostream>

class NetworkConnectionRAII {
    bool connected;

public:
    NetworkConnectionRAII() {
        connected = true;
        std::cout << "Network connection established." << std::endl;
    }

    ~NetworkConnectionRAII() {
        if (connected) {
            std::cout << "Network connection closed." << std::endl;
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
    }  // Network connection is automatically closed when `connection` goes out of scope.
}
