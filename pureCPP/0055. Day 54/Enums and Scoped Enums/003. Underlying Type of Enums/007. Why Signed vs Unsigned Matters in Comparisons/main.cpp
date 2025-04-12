#include <iostream>

enum class Result : int8_t { Fail = -1, Pass = 0 };
enum class Code : uint8_t { Error = 255, Success = 0 };

int main() {
    Result r = Result::Fail;
    Code c = Code::Error;

    std::cout << "Result value: " << static_cast<int>(r) << std::endl;
    std::cout << "Code value: " << static_cast<int>(c) << std::endl;

    // if (r == c) {} // ❌ Different signedness and types
}
