#include <iostream>

void process(int code) {
    std::cout << "Processing int: " << code << std::endl;
}

enum class ErrorCode { FileNotFound = 404, ServerError = 500 };

int main() {
    ErrorCode e = ErrorCode::FileNotFound;

    // process(e); // ❌ Error: won't match int overload
    process(static_cast<int>(e)); // ✅ Works only with cast
}
