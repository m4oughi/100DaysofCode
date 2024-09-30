#include <iostream>
using namespace std;

class Number {
private:
    int &ref;

public:
    // Reference members must be initialized using initialization list
    Number(int &r) : ref(r) {}

    void display() {
        cout << "Reference value: " << ref << endl;
    }
};

int main() {
    int x = 10;
    Number num(x);  // Object creation with reference member
    num.display();
    return 0;
}
