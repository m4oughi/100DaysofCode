#include <iostream>

enum class StatusCode : uint32_t {
    OK = 0,
    NotFound = 404,
    ServerError = 500,
    GatewayTimeout = 504
};

int main() {
    StatusCode s = StatusCode::ServerError;
    std::cout << "StatusCode size: " << sizeof(s) << " bytes\n";
}
