#include <iostream>

enum class ErrorCode : unsigned short {
    None = 0,
    Warning = 100,
    Fatal = 200
};

int main() {
    ErrorCode err = ErrorCode::Fatal;
    std::cout << "Underlying value (unsigned short): " << static_cast<unsigned short>(err) << std::endl;
}
