#include <iostream>

enum class HttpCode : short { OK = 200, NotFound = 404, ServerError = 500 };

int main() {
    HttpCode code = HttpCode::NotFound;
    std::cout << "Error code: " << static_cast<short>(code) << std::endl;
}
