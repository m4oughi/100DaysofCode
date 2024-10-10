#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car is starting..." << endl;
    }
    // Forgot to implement stop(), so Car remains abstract
};

int main() {
    // Car myCar;  // Error: Car is still abstract because stop() is not implemented
    return 0;
}
