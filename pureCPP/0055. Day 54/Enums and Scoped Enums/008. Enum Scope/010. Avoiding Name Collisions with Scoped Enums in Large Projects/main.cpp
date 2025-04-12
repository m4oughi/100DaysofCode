#include <iostream>

namespace SystemA {
    enum class Status { OK, Fail };
}

namespace SystemB {
    enum class Status { OK, Fail };
}

int main() {
    SystemA::Status a = SystemA::Status::OK;
    SystemB::Status b = SystemB::Status::Fail;

    std::cout << "Multiple systems can safely use the same enum names.\n";
}
