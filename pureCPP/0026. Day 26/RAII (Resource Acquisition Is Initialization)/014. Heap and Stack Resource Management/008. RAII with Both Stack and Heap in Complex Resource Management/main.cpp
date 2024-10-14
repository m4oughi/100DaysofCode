#include <iostream>
#include <memory>

class ComplexResourceManager {
    std::unique_ptr<int> resource1;
    std::unique_ptr<int> resource2;
public:
    ComplexResourceManager() 
        : resource1(std::make_unique<int>(10)), resource2(std::make_unique<int>(20)) {
        std::cout << "Both resources acquired." << std::endl;
    }

    ~ComplexResourceManager() {
        std::cout << "Both resources released." << std::endl;
    }

    void showResources() const {
        std::cout << "Resource1: " << *resource1 << ", Resource2: " << *resource2 << std::endl;
    }
};

int main() {
    {
        ComplexResourceManager manager;
        manager.showResources();
        // Resources are cleaned up when `manager` goes out of scope.
    }
    std::cout << "All resources have been released." << std::endl;
}
