#include <iostream>
#include <exception>
#include <stdexcept>

class CustomLogicError : public std::logic_error {
public:
    CustomLogicError(const std::string& msg) : std::logic_error(msg) {}
};

int main() {
    try {
        throw CustomLogicError("Custom logic error occurred");
    } catch (const CustomLogicError& e) {
        std::cout << "Caught CustomLogicError: " << e.what() << std::endl;
    } catch (const std::logic_error& e) {
        std::cout << "Caught std::logic_error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;
    }

    return 0;
}
