#include <iostream>
#include <exception>

class NetworkException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Network error!";
    }
};

class TimeoutException : public NetworkException {
public:
    const char* what() const noexcept override {
        return "Network timeout!";
    }
};

int main() {
    try {
        try {
            throw TimeoutException();
        } catch (const TimeoutException& e) {
            std::cout << "Handling TimeoutException: " << e.what() << std::endl;
            throw;  // Re-throw the exception
        }
    } catch (const NetworkException& e) {
        std::cout << "Caught NetworkException in outer block: " << e.what() << std::endl;
    }

    return 0;
}
