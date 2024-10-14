#include <iostream>
#include <memory>
#include <vector>

void poolDeleter(int* ptr) {
    std::cout << "Returning resource to the pool..." << std::endl;
    // Hypothetical return to pool logic
    // returnResourceToPool(ptr);
}

int main() {
    std::vector<std::shared_ptr<int>> resourcePool;

    for (int i = 0; i < 5; ++i) {
        resourcePool.push_back(std::shared_ptr<int>(new int(i * 10), poolDeleter));
    }

    // Resources will be "returned to the pool" when they go out of scope
    return 0;
}
