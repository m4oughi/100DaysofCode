#include <iostream>

struct Data {
    char a;
    int b;
};

static_assert(alignof(Data) == 4, "Unexpected alignment for Data!");

int main() {
    std::cout << "Struct alignment check passed!\n";
    return 0;
}
