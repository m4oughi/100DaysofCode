#include <iostream>
#include <exception>
#include <string>
#include <sstream>

class DetailedException : public std::exception {
private:
    std::string message;
public:
    DetailedException(const std::string& errorMessage, const char* function, int line) {
        std::ostringstream oss;
        oss << errorMessage << " in function " << function << " at line " << line;
        message = oss.str();
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw DetailedException("Invalid operation", __func__, __LINE__);
    } catch (const DetailedException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
