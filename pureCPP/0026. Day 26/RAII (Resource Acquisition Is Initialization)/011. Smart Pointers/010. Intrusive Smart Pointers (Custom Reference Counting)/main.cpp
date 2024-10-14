#include <iostream>

class IntrusivePtr {
    int* resource;
    int* refCount;

public:
    IntrusivePtr(int* res) : resource(res), refCount(new int(1)) {
        std::cout << "Resource acquired, refCount = " << *refCount << std::endl;
    }

    IntrusivePtr(const IntrusivePtr& other) : resource(other.resource), refCount(other.refCount) {
        ++(*refCount);
        std::cout << "Copied resource, refCount = " << *refCount << std::endl;
    }

    ~IntrusivePtr() {
        --(*refCount);
        std::cout << "Resource reference decremented, refCount = " << *refCount << std::endl;
        if (*refCount == 0) {
            delete resource;
            delete refCount;
            std::cout << "Resource and refCount deallocated." << std::endl;
        }
    }
};

int main() {
    {
        IntrusivePtr ptr1(new int(10));
        {
            IntrusivePtr ptr2 = ptr1;
        }  // `ptr2` is destroyed, but `ptr1` still holds the resource.
    }  // Resource is deallocated when the last reference (`ptr1`) goes out of scope.
}
