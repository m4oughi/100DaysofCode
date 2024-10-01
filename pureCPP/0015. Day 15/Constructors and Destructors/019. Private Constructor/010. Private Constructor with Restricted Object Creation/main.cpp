#include <iostream>

class RestrictedObject {
private:
    int value;
    RestrictedObject(int x) : value(x) {  // Private constructor
        std::cout << "RestrictedObject created with value: " << value << std::endl;
    }

public:
    static RestrictedObject createIfAllowed(int x) {
        if (x > 0) {
            return RestrictedObject(x);  // Accessing private constructor only under certain conditions
        } else {
            throw std::invalid_argument("Value must be greater than zero");
        }
    }
};

int main() {
    try {
        RestrictedObject obj1 = RestrictedObject::createIfAllowed(10);  // Valid creation
        // RestrictedObject obj2 = RestrictedObject::createIfAllowed(-5);  // Invalid creation (exception thrown)
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
