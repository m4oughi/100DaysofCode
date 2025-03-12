#include <iostream>

class ExplicitOnly {
public:
    ExplicitOnly(int) = delete; // Prevents implicit conversion from int
};

int main() {
    // ExplicitOnly obj = 10; // Error: Constructor is deleted
    return 0;
}
