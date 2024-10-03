#include <iostream>
using namespace std;

class Resource {
public:
    void display() {
        cout << "Resource display function" << endl;
    }
};

class ResourcePointer {
    Resource* res;
public:
    ResourcePointer(Resource* r) : res(r) {}

    // Overload the arrow operator
    Resource* operator->() {
        return res;
    }
};

int main() {
    Resource res;
    ResourcePointer ptr(&res);
    ptr->display();  // Output: Resource display function
    return 0;
}
