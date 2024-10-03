#include <iostream>
using namespace std;

class PointerWrapper {
    int value;
public:
    PointerWrapper(int v) : value(v) {}

    PointerWrapper* operator->() {
        return this;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    PointerWrapper p(42);
    p->display();  // Output: Value: 42
    return 0;
}
