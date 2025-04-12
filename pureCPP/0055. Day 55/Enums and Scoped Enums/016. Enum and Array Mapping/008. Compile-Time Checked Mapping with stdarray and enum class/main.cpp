#include <iostream>
#include <array>
#include <string>

enum class Status : int { OK, Warning, Error, Count };

constexpr std::array<const char*, static_cast<int>(Status::Count)> statusText = {
    "Everything is fine",
    "Something might be wrong",
    "Critical failure"
};

int main() {
    Status s = Status::Warning;
    std::cout << "System Status: " << statusText[static_cast<int>(s)] << "\n";
}
