#include <iostream>

struct [[deprecated("Use NewData instead")]] OldData {
    int value;
};

struct NewData {
    int value;
};

int main() {
    OldData od{10};  // Warning: OldData is deprecated
    NewData nd{20};  // Preferred usage

    std::cout << nd.value << std::endl;

    return 0;
}
