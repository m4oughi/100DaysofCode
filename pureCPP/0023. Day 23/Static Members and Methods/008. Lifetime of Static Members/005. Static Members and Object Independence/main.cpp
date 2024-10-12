#include <iostream>
using namespace std;

class Number {
public:
    int instanceValue;  // Non-static member
    static int globalValue;  // Static member shared across instances

    Number(int iv) : instanceValue(iv) {}

    void showValues() {
        cout << "Instance value: " << instanceValue << ", Global value: " << globalValue << endl;
    }
};

// Initialize static member
int Number::globalValue = 42;

int main() {
    Number n1(1), n2(2);

    n1.showValues();  // Output: Instance value: 1, Global value: 42
    n2.showValues();  // Output: Instance value: 2, Global value: 42

    n1.globalValue = 99;  // Modify global static value
    n2.showValues();  // Output: Instance value: 2, Global value: 99

    return 0;
}
