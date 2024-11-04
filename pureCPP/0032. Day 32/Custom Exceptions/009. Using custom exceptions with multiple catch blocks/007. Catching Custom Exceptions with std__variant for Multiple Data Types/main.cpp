#include <iostream>
#include <exception>
#include <variant>

class VariantException : public std::exception {
private:
    std::variant<int, std::string> customData;
public:
    VariantException(const std::variant<int, std::string>& data) : customData(data) {}

    const std::variant<int, std::string>& getCustomData() const {
        return customData;
    }

    const char* what() const noexcept override {
        return "Variant Exception occurred!";
    }
};

int main() {
    try {
        throw VariantException(404);  // Throwing an integer
    } catch (const VariantException& e) {
        std::cout << e.what() << std::endl;

        if (std::holds_alternative<int>(e.getCustomData())) {
            std::cout << "Error Code: " << std::get<int>(e.getCustomData()) << std::endl;
        } else if (std::holds_alternative<std::string>(e.getCustomData())) {
            std::cout << "Error Message: " << std::get<std::string>(e.getCustomData()) << std::endl;
        }
    }

    try {
        throw VariantException("File Not Found");  // Throwing a string
    } catch (const VariantException& e) {
        std::cout << e.what() << std::endl;

        if (std::holds_alternative<int>(e.getCustomData())) {
            std::cout << "Error Code: " << std::get<int>(e.getCustomData()) << std::endl;
        } else if (std::holds_alternative<std::string>(e.getCustomData())) {
            std::cout << "Error Message: " << std::get<std::string>(e.getCustomData()) << std::endl;
        }
    }

    return 0;
}
