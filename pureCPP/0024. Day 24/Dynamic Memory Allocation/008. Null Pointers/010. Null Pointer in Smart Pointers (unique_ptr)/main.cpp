#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr = nullptr; // declare a null unique pointer

    // Check if pointer is null
    if (ptr == nullptr) {
        ptr = make_unique<int>(5); // allocate memory
        cout << "Unique pointer value: " << *ptr << endl;
    }

    // No need to manually delete, memory is automatically cleaned up
    return 0;
}
