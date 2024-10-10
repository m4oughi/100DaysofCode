#include <iostream>
using namespace std;

template <typename T>
class Comparator {
public:
    virtual bool compare(T a, T b) {
        return a < b;
    }
};

class IntComparator : public Comparator<int> {
public:
    bool compare(int a, int b) override {
        cout << "Comparing integers..." << endl;
        return a < b;
    }
};

int main() {
    Comparator<int>* comp = new IntComparator();
    cout << "Comparison result: " << comp->compare(3, 5) << endl;  // Outputs "Comparing integers..." and "Comparison result: 1"
    delete comp;
    return 0;
}
