#include <iostream>
#include <exception>
#include <string>

class LocalizationException : public std::exception {
private:
    std::string message;
public:
    LocalizationException(const std::string& errorMessage, const std::string& lang) {
        if (lang == "en") {
            message = "Error: " + errorMessage;
        } else if (lang == "es") {
            message = "Error: " + errorMessage;  // Spanish error message
        } else {
            message = "Unknown language error: " + errorMessage;
        }
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw LocalizationException("File not found", "es");
    } catch (const LocalizationException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
