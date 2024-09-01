#include <iostream>
using namespace std;

// Forward declaration of Friend class
class FriendClass;

// Base class
class Base {
private:
    int value;
protected:
    void protectedShow() { cout << "Protected value: " << value << endl; }
public:
    Base(int val) : value(val) { cout << "Base constructor called." << endl; }
    
    // Declare FriendClass as a friend
    friend class FriendClass;
};

// Friend class
class FriendClass {
public:
    void displayBase(const Base& b) {
        // Access private member of Base
        cout << "Base value from FriendClass: " << b.value << endl;
        b.protectedShow(); // Access protected member through public method
    }
};

int main() {
    Base b(30);
    FriendClass fc;
    fc.displayBase(b); // Access private and protected members

    return 0;
}
