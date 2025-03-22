#include <iostream>

struct [[nodiscard]] Error {
    std::string message;
};

Error getError() {
    return {"Something went wrong!"};
}

int main() {
    getError(); // Compiler may warn: return value is ignored
    return 0;
}
