#include <iostream>
#include <stdexcept>

class CustomLogicError : public std::logic_error {
public:
    CustomLogicError(const std::string& message) : std::logic_error(message) {}
};

int main() {
    try {
        throw CustomLogicError("Custom logic error occurred");
    } catch (const CustomLogicError& e) {
        std::cout << "Caught custom logic_error: " << e.what() << std::endl;
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl;
    }
    return 0;
}
