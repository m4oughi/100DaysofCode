#include <iostream>
#include <new>

class MyBadAlloc : public std::bad_alloc {
public:
    const char* what() const noexcept override {
        return "Custom bad_alloc: Memory allocation failed!";
    }
};

int main() {
    try {
        throw MyBadAlloc();
    } catch (const MyBadAlloc& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
