#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}

    // Overload && operator
    bool operator&&(const Test& other) {
        return value && other.value;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Test t1(0), t2(1);
    
    // Overloaded && operator won't behave like a short-circuiting logical operator
    if (t1 && t2) {
        cout << "Both are non-zero!" << endl;
    } else {
        cout << "At least one is zero!" << endl;
    }
    
    return 0;
}
