#include <iostream>
using namespace std;

template <typename T>
class Comparator {
public:
    virtual bool compare(T a, T b) = 0;  // Pure virtual function
};

class IntComparator : public Comparator<int> {
public:
    bool compare(int a, int b) override {
        return a < b;
    }
};

class DoubleComparator : public Comparator<double> {
public:
    bool compare(double a, double b) override {
        return a > b;
    }
};

void testComparison(Comparator<int>* comparator) {
    cout << "Comparison result: " << comparator->compare(10, 20) << endl;  // Polymorphic behavior
}

int main() {
    IntComparator intComp;
    DoubleComparator doubleComp;

    testComparison(&intComp);  // Outputs "Comparison result: 1"
    // Cannot test DoubleComparator directly with int comparator due to type mismatch

    return 0;
}
