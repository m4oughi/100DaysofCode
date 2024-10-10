#include <iostream>
using namespace std;

class IDevice {
public:
    virtual void operate() = 0;
    virtual ~IDevice() = 0;  // Pure virtual destructor
};

IDevice::~IDevice() {
    cout << "IDevice destroyed." << endl;
}

class Computer : public IDevice {
public:
    void operate() override {
        cout << "Operating computer..." << endl;
    }
    ~Computer() {
        cout << "Computer destroyed." << endl;
    }
};

int main() {
    IDevice* device = new Computer();
    device->operate();  // Outputs "Operating computer..."

    delete device;  // Outputs "Computer destroyed." followed by "IDevice destroyed."
    
    return 0;
}
