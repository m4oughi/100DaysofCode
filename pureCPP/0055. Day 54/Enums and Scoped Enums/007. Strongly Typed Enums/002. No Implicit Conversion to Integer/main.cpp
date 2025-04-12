#include <iostream>

enum class Status { OK = 1, Error = 2 };

int main() {
    Status s = Status::OK;

    // int value = s;         // ❌ Error: no implicit conversion
    int value = static_cast<int>(s); // ✅ Must be explicit
    std::cout << "Status value: " << value << std::endl;
}
