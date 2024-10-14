#include <iostream>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }
};

int main() {
    {
        Resource res;
        // The resource is deterministically destroyed when `res` goes out of scope.
    }  // Resource released here
    std::cout << "Resource has been released." << std::endl;
}
