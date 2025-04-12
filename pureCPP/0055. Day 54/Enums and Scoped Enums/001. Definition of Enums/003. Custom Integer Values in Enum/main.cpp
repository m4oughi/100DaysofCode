#include <iostream>

enum StatusCode { OK = 200, NotFound = 404, ServerError = 500 };

int main() {
    std::cout << "OK: " << OK << ", NotFound: " << NotFound << std::endl;
}
