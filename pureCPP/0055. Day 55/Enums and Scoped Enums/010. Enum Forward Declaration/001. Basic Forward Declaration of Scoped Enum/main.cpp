#include <iostream>

// Forward declaration with underlying type
enum class Status : int;

void printStatus(Status s);

enum class Status : int {
    OK = 0,
    Fail = 1
};

void printStatus(Status s) {
    if (s == Status::OK)
        std::cout << "Status OK\n";
    else
        std::cout << "Status Fail\n";
}

int main() {
    printStatus(Status::OK);
}
