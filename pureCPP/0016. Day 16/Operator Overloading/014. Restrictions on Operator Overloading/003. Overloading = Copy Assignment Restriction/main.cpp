#include <iostream>
using namespace std;

class Test {
    int* data;
public:
    Test(int v) {
        data = new int(v);
    }

    // Custom copy assignment operator
    Test& operator=(const Test& other) {
        if (this != &other) {  // Self-assignment check
            delete data;  // Free old memory
            data = new int(*other.data);  // Deep copy
        }
        return *this;
    }

    void display() const {
        cout << *data << endl;
    }

    ~Test() {
        delete data;
    }
};

int main() {
    Test t1(5);
    Test t2(10);
    t1 = t2;  // Copy assignment
    t1.display();  // Output: 10
    return 0;
}
