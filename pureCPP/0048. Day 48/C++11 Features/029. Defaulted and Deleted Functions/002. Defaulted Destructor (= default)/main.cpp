#include <iostream>

class Example {
public:
    ~Example() = default; // Default destructor
};

int main() {
    Example ex; // Calls default destructor
    return 0;
}
