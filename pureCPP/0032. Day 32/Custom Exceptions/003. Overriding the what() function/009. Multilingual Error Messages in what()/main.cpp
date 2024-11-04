#include <iostream>
#include <exception>
#include <string>

class MyException : public std::exception {
private:
    std::string message;
public:
    MyException(const std::string& msg, const std::string& lang) {
        if (lang == "en") {
            message = "Error: " + msg;
        } else if (lang == "fr") {
            message = "Erreur: " + msg;
        } else {
            message = "Unknown language: " + msg;
        }
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw MyException("File not found", "fr");
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
