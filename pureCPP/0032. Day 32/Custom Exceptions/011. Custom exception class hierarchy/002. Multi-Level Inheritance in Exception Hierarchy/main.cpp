#include <iostream>
#include <exception>

class GeneralException : public std::exception {
public:
    const char* what() const noexcept override {
        return "General Exception occurred!";
    }
};

class SpecificException : public GeneralException {
public:
    const char* what() const noexcept override {
        return "Specific Exception occurred!";
    }
};

class MoreSpecificException : public SpecificException {
public:
    const char* what() const noexcept override {
        return "More Specific Exception occurred!";
    }
};

int main() {
    try {
        throw MoreSpecificException();
    } catch (const GeneralException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
