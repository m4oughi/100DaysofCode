#include <iostream>
#include <cstdint>

enum class ErrorCode : uint64_t {
    None = 0,
    Minor = 10000000000ULL,
    Major = 99999999999ULL
};

int main() {
    ErrorCode code = ErrorCode::Major;
    std::cout << "ErrorCode size: " << sizeof(code) << " bytes\n";
}
