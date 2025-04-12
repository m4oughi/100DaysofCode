#include <iostream>

void printStatus() {
    enum class Status { OK, Fail };
    Status s = Status::OK;

    if (s == Status::OK)
        std::cout << "Function-local enum: OK\n";
}

int main() {
    printStatus();
    // Status::OK not accessible here — out of scope
}
