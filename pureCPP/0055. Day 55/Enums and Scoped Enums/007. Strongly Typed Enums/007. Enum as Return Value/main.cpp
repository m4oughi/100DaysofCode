#include <iostream>

enum class OperationStatus { Success, Failure };

OperationStatus doWork() {
    // Some logic...
    return OperationStatus::Success;
}

int main() {
    if (doWork() == OperationStatus::Success) {
        std::cout << "Operation succeeded!\n";
    }
}
