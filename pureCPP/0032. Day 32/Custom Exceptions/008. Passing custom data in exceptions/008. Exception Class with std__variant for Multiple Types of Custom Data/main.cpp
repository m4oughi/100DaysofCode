#include <iostream>
#include <exception>
#include <string>
#include <variant>

class MultiDataException : public std::exception {
private:
    std::variant<int, std::string> customData;
    std::string message;
public:
    MultiDataException(int code, const std::string& msg) 
        : customData(code), message(msg) {}

    MultiDataException(const std::string& error, const std::string& msg) 
        : customData(error), message(msg) {}

    std::variant<int, std::string> getCustomData() const {
        return customData;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw MultiDataException(404, "Error with integer code");
    } catch (const MultiDataException& e) {
        std::cout << e.what() << ", Custom Data: ";
        if (std::holds_alternative<int>(e.getCustomData())) {
            std::cout << std::get<int>(e.getCustomData()) << std::endl;
        }
    }

    try {
        throw MultiDataException("FileNotFound", "Error with string message");
    } catch (const MultiDataException& e) {
        std::cout << e.what() << ", Custom Data: ";
        if (std::holds_alternative<std::string>(e.getCustomData())) {
            std::cout << std::get<std::string>(e.getCustomData()) << std::endl;
        }
    }

    return 0;
}
