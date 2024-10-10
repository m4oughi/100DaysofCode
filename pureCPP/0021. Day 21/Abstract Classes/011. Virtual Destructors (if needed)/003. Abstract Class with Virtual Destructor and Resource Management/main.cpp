#include <iostream>
using namespace std;

// Abstract Base Class with Virtual Destructor
class Resource {
public:
    virtual void useResource() = 0;  // Pure virtual function
    virtual ~Resource() {  // Virtual destructor
        cout << "Resource Destructor" << endl;
    }
};

class FileResource : public Resource {
private:
    char* data;
public:
    FileResource() {
        data = new char[100];  // Dynamically allocate memory
        cout << "FileResource Acquired" << endl;
    }
    void useResource() override {
        cout << "Using FileResource" << endl;
    }
    ~FileResource() override {
        delete[] data;  // Clean up memory
        cout << "FileResource Released" << endl;
    }
};

int main() {
    Resource* res = new FileResource();  // Polymorphic object
    res->useResource();
    delete res;  // Properly calls FileResource and then Resource destructor

    return 0;
}
