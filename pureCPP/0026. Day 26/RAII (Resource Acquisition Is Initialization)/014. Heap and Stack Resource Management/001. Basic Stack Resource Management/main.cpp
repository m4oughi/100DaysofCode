#include <iostream>

class StackResource {
public:
    StackResource() {
        std::cout << "Stack resource acquired." << std::endl;
    }

    ~StackResource() {
        std::cout << "Stack resource released." << std::endl;
    }
};

int main() {
    {
        StackResource res;
        // Resource is automatically released when 'res' goes out of scope.
    }  // Destructor called here, releasing the stack resource.
    std::cout << "Exiting scope." << std::endl;
}
