#include <iostream>

enum class Result : uint8_t {
    Success = 0,
    Failure = 1
};

int main() {
    Result r = Result::Success;
    std::cout << "Result size: " << sizeof(r) << " byte\n";
}
