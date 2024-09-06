#include <iostream>
#include <utility>

class Resource {
public:
    int* data;

    Resource(int val) : data(new int(val)) {}

    // Move constructor
    Resource(Resource &&other) noexcept : data(other.data) {
        other.data = nullptr;  // Transferred ownership
    }

    ~Resource() {
        delete data;
    }
};

Resource createResource() {
    Resource res(100);
    return std::move(res);
}


int main() {
    Resource r1 = createResource();
    int* &alias = r1.data;  // alias to r1.data

    *alias = 200;  // Modify the moved-from object
    std::cout << *r1.data << std::endl;  // Output: 200

    return 0;
}