#include <iostream>
#include <exception>
#include <string>

class InvalidAgeException : public std::exception {
private:
    std::string message;
public:
    InvalidAgeException(int age) {
        message = "Error: Age " + std::to_string(age) + " is invalid!";
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

void checkAge(int age) {
    if (age < 0 || age > 120)
        throw InvalidAgeException(age);
}

int main() {
    try {
        checkAge(150);  // Invalid age, will throw exception
    } catch (const InvalidAgeException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
