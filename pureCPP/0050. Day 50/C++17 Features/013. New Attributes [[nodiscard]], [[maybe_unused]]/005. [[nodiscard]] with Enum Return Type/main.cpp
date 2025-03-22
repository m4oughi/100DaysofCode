#include <iostream>

enum class [[nodiscard]] Status { Success, Failure };

Status process() {
    return Status::Failure;
}

int main() {
    process(); // Compiler may warn: return value ignored
    return 0;
}
