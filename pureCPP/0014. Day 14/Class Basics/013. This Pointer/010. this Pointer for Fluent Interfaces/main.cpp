#include <iostream>
using namespace std;

class Calculator {
private:
    int value;

public:
    Calculator(int initialValue = 0) : value(initialValue) {}

    Calculator* add(int num) {
        this->value += num;
        return this;  // Returning `this` for method chaining
    }

    Calculator* subtract(int num) {
        this->value -= num;
        return this;
    }

    Calculator* multiply(int num) {
        this->value *= num;
        return this;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Calculator calc(10);
    calc.add(5)->subtract(3)->multiply(4)->display();  // Method chaining using `this`
    return 0;
}
