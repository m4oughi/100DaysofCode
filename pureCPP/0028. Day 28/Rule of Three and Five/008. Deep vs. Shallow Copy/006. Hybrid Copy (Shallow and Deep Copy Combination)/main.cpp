#include <iostream>
#include <string>

class HybridCopy {
    std::string* sharedString;
    int* uniqueData;
public:
    HybridCopy(std::string shared, int unique)
        : sharedString(new std::string(shared)), uniqueData(new int(unique)) {
        std::cout << "Resources allocated (HybridCopy)!" << std::endl;
    }

    // Copy Constructor (Hybrid Copy)
    HybridCopy(const HybridCopy& other)
        : sharedString(other.sharedString), uniqueData(new int(*other.uniqueData)) {
        std::cout << "Hybrid copy constructor called!" << std::endl;
    }

    ~HybridCopy() {
        delete uniqueData;
        std::cout << "Unique resource deallocated (HybridCopy)!" << std::endl;
    }

    void display() const {
        std::cout << "Shared string: " << *sharedString
                  << ", Unique data: " << *uniqueData << std::endl;
    }
};

int main() {
    HybridCopy obj1("SharedResource", 42);
    HybridCopy obj2 = obj1;  // Hybrid copy

    obj1.display();
    obj2.display();  // Different unique data, but shared resource

    return 0;
}
