#include <iostream>
using namespace std;

class Example {
    int value;
public:
    Example(int v) : value(v) {}
    
    void modify() const {
        const_cast<Example*>(this)->value = 42;  // Remove const from this pointer
    }

    void print() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Example obj(10);
    obj.modify();  // Modifies value despite modify() being const
    obj.print();
    return 0;
}
