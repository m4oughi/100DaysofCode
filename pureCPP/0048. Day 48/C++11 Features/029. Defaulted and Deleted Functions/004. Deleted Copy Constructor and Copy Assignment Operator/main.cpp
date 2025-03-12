#include <iostream>

class NonCopyable {
public:
    NonCopyable() = default;
    NonCopyable(const NonCopyable&) = delete; // Prevent copying
    NonCopyable& operator=(const NonCopyable&) = delete; // Prevent copy assignment
};

int main() {
    NonCopyable obj1;
    // NonCopyable obj2 = obj1; // Error: Copy constructor is deleted
    // obj1 = obj2; // Error: Copy assignment operator is deleted
    return 0;
}
