#include <iostream>
using namespace std;

class Proxy {
    int* data;
public:
    Proxy(int* d) : data(d) {}

    void increment() {
        ++(*data);
    }

    int getValue() const {
        return *data;
    }
};

class Container {
    int value;
public:
    Container(int v) : value(v) {}

    // Overload the arrow operator to return Proxy object
    Proxy operator->() {
        return Proxy(&value);
    }
};

int main() {
    Container c(5);

    c->increment();
    cout << "Value after increment: " << c->getValue() << endl;  // Output: 6

    return 0;
}
