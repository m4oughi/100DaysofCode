#include <iostream>

enum ErrorCode { None = 0, Minor = 100, Major = 1000, Critical = 5000 };

int main() {
    ErrorCode code = Critical;
    std::cout << "Error code: " << code << std::endl;
}
