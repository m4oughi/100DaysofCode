#include <iostream>

enum class Status { Success, Failure, Pending };

int main() {
    Status s = Status::Pending;

    switch (s) {  // Works with scoped enums in modern compilers
        case Status::Success: std::cout << "Success\n"; break;
        case Status::Failure: std::cout << "Failure\n"; break;
        case Status::Pending: std::cout << "Pending\n"; break;
    }
}
