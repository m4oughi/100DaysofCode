#include <iostream>

enum class HttpStatus {
    OK = 200,
    Created = 201,
    Accepted = 202,
    BadRequest = 400,
    Unauthorized = 401,
    NotFound = 404,
    InternalServerError = 500
};

bool isClientError(HttpStatus status) {
    int code = static_cast<int>(status);
    return code >= 400 && code < 500;
}

int main() {
    std::cout << "401 is client error? " << isClientError(HttpStatus::Unauthorized) << "\n";
    std::cout << "500 is client error? " << isClientError(HttpStatus::InternalServerError) << "\n";
}
