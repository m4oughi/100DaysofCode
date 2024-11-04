#include <iostream>
#include <exception>
#include <string>

class ReferenceDataException : public std::exception {
private:
    const std::string& data;
public:
    ReferenceDataException(const std::string& refData) : data(refData) {}

    const char* what() const noexcept override {
        return data.c_str();
    }
};

int main() {
    try {
        std::string errorMsg = "Reference-based error message";
        throw ReferenceDataException(errorMsg);
    } catch (const ReferenceDataException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
