#include <iostream>
#include <map>

enum class Status {
    Success,
    Failure,
    Pending
};

int main() {
    std::map<Status, int> statusCodeMap;

    // Default values for enums
    statusCodeMap[Status::Success] = 200;
    statusCodeMap[Status::Failure] = 500;
    statusCodeMap[Status::Pending] = 102;

    // Accessing a default value
    std::cout << "Success code: " << statusCodeMap[Status::Success] << "\n";
    std::cout << "Failure code: " << statusCodeMap[Status::Failure] << "\n";
    std::cout << "Pending code: " << statusCodeMap[Status::Pending] << "\n";

    return 0;
}
