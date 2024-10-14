#include <iostream>

class SocketRAII {
    int socket;

public:
    SocketRAII(int s) : socket(s) {
        std::cout << "Socket " << socket << " opened." << std::endl;
    }

    ~SocketRAII() {
        std::cout << "Socket " << socket << " closed automatically." << std::endl;
    }

    void sendData(const std::string& data) {
        std::cout << "Data sent: " << data << std::endl;
    }
};

int main() {
    {
        SocketRAII socket(1);  // Simulating socket connection.
        socket.sendData("RAII ensures socket closure.");
    }  // Socket is automatically closed when `SocketRAII` goes out of scope.
}
