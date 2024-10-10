#include <iostream>
using namespace std;

// Abstract Base Class
class Resource {
protected:
    int* data;
public:
    Resource() {
        data = new int(10);  // Dynamically allocate resource
        cout << "Resource constructor: Resource allocated!" << endl;
    }
    
    virtual ~Resource() {
        delete data;  // Free the allocated resource
        cout << "Resource destructor: Resource deallocated!" << endl;
    }
    
    virtual void use() = 0;  // Pure virtual function
};

// Derived Class
class FileResource : public Resource {
public:
    FileResource() {
        cout << "FileResource constructor called!" << endl;
    }
    
    ~FileResource() {
        cout << "FileResource destructor called!" << endl;
    }
    
    void use() override {
        cout << "Using file resource with data: " << *data << endl;
    }
};

int main() {
    Resource* res = new FileResource();
    res->use();     // Outputs: Using file resource with data: 10
    delete res;     // Outputs destructors in reverse order: FileResource, Resource

    return 0;
}
