#include <iostream>

enum class ResultCode : int { Ok = 0, NotFound = 404, ServerError = 500 };

void log(ResultCode code) {
    std::cout << "HTTP Code: " << static_cast<int>(code) << std::endl;
}

int main() {
    log(ResultCode::NotFound);
}
