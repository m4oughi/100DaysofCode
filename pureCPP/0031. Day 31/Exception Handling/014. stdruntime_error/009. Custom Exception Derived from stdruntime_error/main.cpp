#include <iostream>
#include <stdexcept>

class CustomRuntimeError : public std::runtime_error {
public:
    CustomRuntimeError(const std::string& message) : std::runtime_error(message) {}
};

int main() {
    try {
        throw CustomRuntimeError("Custom runtime error occurred");
    } catch (const CustomRuntimeError& e) {
        std::cout << "Caught custom runtime_error: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
