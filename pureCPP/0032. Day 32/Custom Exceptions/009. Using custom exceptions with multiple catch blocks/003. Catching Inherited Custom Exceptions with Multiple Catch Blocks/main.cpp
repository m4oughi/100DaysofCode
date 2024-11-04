#include <iostream>
#include <exception>

class CustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom Exception occurred!";
    }
};

class SpecificExceptionA : public CustomException {
public:
    const char* what() const noexcept override {
        return "Specific Exception A occurred!";
    }
};

class SpecificExceptionB : public CustomException {
public:
    const char* what() const noexcept override {
        return "Specific Exception B occurred!";
    }
};

int main() {
    try {
        throw SpecificExceptionA();
    } catch (const SpecificExceptionA& e) {
        std::cout << "Caught SpecificExceptionA: " << e.what() << std::endl;
    } catch (const SpecificExceptionB& e) {
        std::cout << "Caught SpecificExceptionB: " << e.what() << std::endl;
    } catch (const CustomException& e) {
        std::cout << "Caught CustomException: " << e.what() << std::endl;
    }

    return 0;
}
