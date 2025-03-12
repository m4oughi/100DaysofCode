#include <iostream>

class NoDefault {
public:
    NoDefault() = delete; // Prevents default construction
};

int main() {
    // NoDefault obj; // Error: Constructor is deleted
    return 0;
}
