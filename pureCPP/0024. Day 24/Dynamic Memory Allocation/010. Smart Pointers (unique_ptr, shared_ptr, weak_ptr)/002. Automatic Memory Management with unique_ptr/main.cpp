#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int> ptr = std::make_unique<int>(20); // allocate memory
        std::cout << "Inside scope, Value: " << *ptr << std::endl;
    } // memory automatically released at end of scope

    // ptr is no longer valid here, no need to call delete manually
    return 0;
}
