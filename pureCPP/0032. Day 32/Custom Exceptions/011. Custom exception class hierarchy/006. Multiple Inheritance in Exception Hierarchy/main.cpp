#include <iostream>
#include <exception>

class IOError : public std::exception {
public:
    const char* what() const noexcept override {
        return "I/O error occurred!";
    }
};

class NetworkError : public std::exception {
public:
    const char* what() const noexcept override {
        return "Network error occurred!";
    }
};

class ComplexError : public IOError, public NetworkError {
public:
    const char* what() const noexcept override {
        return "Complex I/O and Network error!";
    }
};

int main() {
    try {
        throw ComplexError();
    } catch (const IOError& e) {
        std::cout << "Caught IOError: " << e.what() << std::endl;
    } catch (const NetworkError& e) {
        std::cout << "Caught NetworkError: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;
    }
    return 0;
}
