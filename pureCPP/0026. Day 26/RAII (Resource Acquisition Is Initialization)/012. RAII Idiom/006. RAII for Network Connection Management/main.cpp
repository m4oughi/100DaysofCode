#include <iostream>

class NetworkConnection {
public:
    NetworkConnection() {
        std::cout << "Network connection established." << std::endl;
    }

    ~NetworkConnection() {
        std::cout << "Network connection closed." << std::endl;
    }

    void sendData(const std::string& data) {
        std::cout << "Sending data: " << data << std::endl;
    }
};

int main() {
    {
        NetworkConnection conn;
        conn.sendData("Hello, World!");
    }  // Connection is automatically closed here.
    std::cout << "Network connection managed by RAII." << std::endl;
}
