#include <iostream>

enum class Status { Success, Warning, Error };

std::string toString(Status s) {
    switch (s) {
        case Status::Success: return "Success";
        case Status::Warning: return "Warning";
        case Status::Error: return "Error";
        default: return "Unknown";
    }
}

int main() {
    Status code = Status::Error;
    std::cout << "Status: " << toString(code) << '\n';
    return 0;
}
