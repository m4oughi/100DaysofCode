#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedOwner1 = std::make_shared<int>(42);
    {
        std::shared_ptr<int> sharedOwner2 = sharedOwner1;  // Shared ownership.
        std::cout << "Shared owner value: " << *sharedOwner1 << std::endl;
        std::cout << "Reference count: " << sharedOwner1.use_count() << std::endl;
    }  // `sharedOwner2` goes out of scope, but the resource is not released.
    
    std::cout << "Reference count after scope exit: " << sharedOwner1.use_count() << std::endl;
}  // Resource is released when the last `shared_ptr` goes out of scope.
