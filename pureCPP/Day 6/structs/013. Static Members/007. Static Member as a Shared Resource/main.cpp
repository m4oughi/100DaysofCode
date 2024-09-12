#include <iostream>

struct SharedResource {
    static int resource;
    
    void useResource() {
        if (resource > 0) {
            std::cout << "Using resource, remaining: " << --resource << std::endl;
        } else {
            std::cout << "No resource left!" << std::endl;
        }
    }
};

int SharedResource::resource = 5;

int main() {
    SharedResource obj1, obj2;
    
    obj1.useResource();
    obj2.useResource();
    obj1.useResource();
    obj2.useResource();
    obj1.useResource();
    obj2.useResource(); // Now the resource is exhausted
}
