#include <iostream>
using namespace std;

struct PointerStruct {
    int* p;

    PointerStruct(int value) {
        p = new int(value);
    }

    ~PointerStruct() {
        delete p;
    }
};

class PointerClass {
    int* p;

public:
    PointerClass(int value) {
        p = new int(value);
    }

    ~PointerClass() {
        delete p;
    }

    void display() const {
        cout << "PointerClass Value: " << *p << endl;
    }
};

int main() {
    PointerStruct ps(10);
    cout << "PointerStruct Value: " << *(ps.p) << endl;

    PointerClass pc(20);
    pc.display();

    return 0;
}
