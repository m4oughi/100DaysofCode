#include <iostream>
using namespace std;

template <typename T>
class Comparator {
public:
    virtual bool compare(T a, T b) = 0;
};

class IntComparator : public Comparator<int> {
public:
    bool compare(int a, int b) override {
        return a < b;
    }
};

int main() {
    IntComparator intComp;
    cout << "Is 3 less than 5? " << (intComp.compare(3, 5) ? "Yes" : "No") << endl;
    return 0;
}
