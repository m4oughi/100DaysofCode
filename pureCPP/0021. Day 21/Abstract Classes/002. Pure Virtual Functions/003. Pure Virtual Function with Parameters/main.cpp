#include <iostream>
using namespace std;

class Calculator {
public:
    virtual int add(int a, int b) = 0;
};

class BasicCalculator : public Calculator {
public:
    int add(int a, int b) override {
        return a + b;
    }
};

int main() {
    BasicCalculator calc;
    cout << "5 + 3 = " << calc.add(5, 3) << endl;
    return 0;
}
