#include <iostream>
using namespace std;

class Base {
public:
    int baseData;
};

class Derived {
public:
    int derivedData;
    Base basePart;
};

int main() {
    Derived derivedObj = {20, {10}};
    
    // Reinterpret Derived* as Base* (no inheritance)
    Base* basePtr = reinterpret_cast<Base*>(&derivedObj);

    cout << "Base data through reinterpret cast: " << basePtr->baseData << endl;
    return 0;
}
