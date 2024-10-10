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

int main() {
    IntComparator comp;
    cout << "Comparison result: " << comp.compare(3, 5) << endl;  // Outputs "Comparison result: 1"
    return 0;
}
