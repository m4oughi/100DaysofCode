#include <iostream>
using namespace std;

class RealObject {
public:
    void operate() {
        cout << "RealObject operating." << endl;
    }
};

class Proxy {
    RealObject* realObj;
public:
    Proxy(RealObject* obj) : realObj(obj) {}

    RealObject* operator->() {
        return realObj;
    }
};

class Container {
    RealObject realObj;
public:
    Proxy operator->() {
        return Proxy(&realObj);
    }
};

int main() {
    Container container;

    container->operate();  // Output: RealObject operating.

    return 0;
}
