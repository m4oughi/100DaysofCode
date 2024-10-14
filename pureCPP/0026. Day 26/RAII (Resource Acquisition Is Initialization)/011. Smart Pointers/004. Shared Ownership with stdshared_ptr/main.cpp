#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(42);
    
    {
        std::shared_ptr<int> sharedPtr2 = sharedPtr1;  // Shared ownership.
        std::cout << "Shared pointer value: " << *sharedPtr1 << std::endl;
        std::cout << "Reference count: " << sharedPtr1.use_count() << std::endl;
    }  // `sharedPtr2` goes out of scope, but resource is not released.
    
    std::cout << "Reference count after scope exit: " << sharedPtr1.use_count() << std::endl;
}  // Resource is automatically released when `sharedPtr1` goes out of scope.
