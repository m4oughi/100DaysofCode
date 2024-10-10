#include <iostream>
using namespace std;

class Calculator {
public:
    virtual int add(int a, int b) {
        return a + b;
    }
};

class AdvancedCalculator : public Calculator {
public:
    int add(int a, int b) override {
        cout << "Advanced calculation" << endl;
        return a + b;
    }
};

int main() {
    Calculator* calc = new AdvancedCalculator();
    cout << "Result: " << calc->add(5, 3) << endl;  // Outputs "Advanced calculation" and "Result: 8"
    delete calc;
    return 0;
}
