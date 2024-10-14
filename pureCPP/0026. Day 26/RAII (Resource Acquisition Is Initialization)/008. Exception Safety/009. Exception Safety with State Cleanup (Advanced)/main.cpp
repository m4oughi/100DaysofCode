#include <iostream>
#include <mutex>
#include <stdexcept>

class NetworkConnection {
public:
    NetworkConnection() {
        std::cout << "Network connection established." << std::endl;
    }

    ~NetworkConnection() {
        std::cout << "Network connection closed." << std::endl;
    }

    void sendData(const std::string& data) {
        std::cout << "Data sent: " << data << std::endl;
    }
};

int main() {
    std::mutex mtx;
    try {
        std::unique_lock<std::mutex> lock(mtx);
        NetworkConnection connection;
        connection.sendData("RAII ensures connection closure.");
        throw std::runtime_error("Simulated exception during network operation.");
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Both network connection and mutex are cleaned up correctly.
}
