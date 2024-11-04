#include <iostream>
#include <exception>
#include <string>

template <typename T>
class CustomDataException : public std::exception {
private:
    T customData;
    std::string message;
public:
    CustomDataException(const T& data, const std::string& msg) : customData(data), message(msg) {}

    const T& getCustomData() const {
        return customData;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw CustomDataException<int>(42, "Integer-based custom exception");
    } catch (const CustomDataException<int>& e) {
        std::cout << "Caught exception: " << e.what() << ", Custom Data: " << e.getCustomData() << std::endl;
    }

    try {
        throw CustomDataException<std::string>("CustomData", "String-based custom exception");
    } catch (const CustomDataException<std::string>& e) {
        std::cout << "Caught exception: " << e.what() << ", Custom Data: " << e.getCustomData() << std::endl;
    }

    return 0;
}
