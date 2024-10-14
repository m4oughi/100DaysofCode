#include <iostream>

class NetworkSocket {
    int socket;
public:
    NetworkSocket() {
        // Simulate creating a network socket
        socket = 1;
        std::cout << "Network socket created." << std::endl;
    }

    ~NetworkSocket() {
        // Simulate closing the socket
        if (socket != -1) {
            std::cout << "Network socket closed." << std::endl;
        }
    }

    void sendData(const std::string& data) {
        if (socket != -1) {
            std::cout << "Sending data: " << data << std::endl;
        }
    }
};

int main() {
    {
        NetworkSocket sock;
        sock.sendData("Hello, RAII and Network!");
    }
    // Socket will be automatically closed when sock goes out of scope
    return 0;
}
