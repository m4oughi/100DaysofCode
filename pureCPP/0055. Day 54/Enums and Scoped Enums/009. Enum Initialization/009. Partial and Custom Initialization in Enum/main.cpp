#include <iostream>

enum class HttpCode {
    OK = 200,
    NotFound = 404,
    InternalError = 500,
    Custom = -1
};

int main() {
    HttpCode code = HttpCode::NotFound;
    std::cout << "HTTP Code: " << static_cast<int>(code) << std::endl;
}
