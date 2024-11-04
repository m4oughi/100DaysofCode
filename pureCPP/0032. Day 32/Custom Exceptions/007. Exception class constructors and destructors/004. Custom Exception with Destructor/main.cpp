#include <iostream>
#include <exception>

class ResourceException : public std::exception {
public:
    ResourceException() {
        std::cout << "ResourceException constructor called." << std::endl;
    }
    
    ~ResourceException() {
        std::cout << "ResourceException destructor called." << std::endl;
        // Perform cleanup or resource release here
    }

    const char* what() const noexcept override {
        return "Resource error occurred!";
    }
};

int main() {
    try {
        throw ResourceException();
    } catch (const ResourceException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
