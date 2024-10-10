#include <iostream>
using namespace std;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Inline friend function declared and defined within the class
    friend void showValue(A& obj) {
        cout << "A's value: " << obj.value << endl;
    }
};

int main() {
    A objA(100);
    showValue(objA);  // Inline friend function is called
    return 0;
}
