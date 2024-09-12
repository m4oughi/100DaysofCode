#include <iostream>

struct [[nodiscard, deprecated("Use NewStruct instead")]] OldStruct {
    int value;
};

struct NewStruct {
    int value;
};

int main() {
    OldStruct os{10};  // Warning: OldStruct is deprecated
    NewStruct ns{20};

    std::cout << ns.value << std::endl;

    return 0;
}
