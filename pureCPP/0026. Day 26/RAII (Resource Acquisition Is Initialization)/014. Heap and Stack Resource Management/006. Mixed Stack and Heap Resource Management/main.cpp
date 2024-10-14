#include <iostream>
#include <memory>

class HeapManager {
    std::unique_ptr<int> data;
public:
    HeapManager() : data(std::make_unique<int>(100)) {
        std::cout << "Heap resource acquired in constructor." << std::endl;
    }

    ~HeapManager() {
        std::cout << "Heap resource released in destructor." << std::endl;
    }

    void showData() const {
        std::cout << "Heap resource value: " << *data << std::endl;
    }
};

int main() {
    {
        HeapManager manager;
        manager.showData();
        // Heap resource is automatically managed and released by the stack-based manager.
    }
    std::cout << "Heap resource managed and released." << std::endl;
}
