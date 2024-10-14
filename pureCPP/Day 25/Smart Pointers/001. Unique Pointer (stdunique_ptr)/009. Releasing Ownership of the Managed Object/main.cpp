#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(80);
    int* rawPtr = ptr.release();  // Releasing ownership, now rawPtr manages the memory

    if (!ptr) {
        std::cout << "unique_ptr is null after release." << std::endl;
    }

    std::cout << "Value managed by rawPtr: " << *rawPtr << std::endl;
    delete rawPtr;  // Manually deleting the object

    return 0;
}
