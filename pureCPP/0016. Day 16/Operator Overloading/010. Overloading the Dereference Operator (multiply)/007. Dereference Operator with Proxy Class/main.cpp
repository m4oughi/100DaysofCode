#include <iostream>
using namespace std;

class Proxy {
    int* data;
public:
    Proxy(int* p) : data(p) {}

    int& operator*() {
        return *data;
    }
};

class Container {
    int value;
public:
    Container(int v) : value(v) {}

    Proxy getProxy() {
        return Proxy(&value);
    }
};

int main() {
    Container c(42);
    Proxy p = c.getProxy();

    cout << *p << endl;  // Output: 42
    *p = 100;
    cout << *p << endl;  // Output: 100

    return 0;
}
