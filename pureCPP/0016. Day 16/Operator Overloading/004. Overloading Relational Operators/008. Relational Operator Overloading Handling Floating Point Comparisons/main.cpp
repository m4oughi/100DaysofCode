#include <iostream>
#include <cmath>
using namespace std;

class Distance {
    double meters;
public:
    Distance(double m) : meters(m) {}

    bool operator==(const Distance& other) const {
        return fabs(meters - other.meters) < 1e-9;
    }

    bool operator<(const Distance& other) const {
        return meters < other.meters;
    }

    bool operator>(const Distance& other) const {
        return meters > other.meters;
    }

    void display() const {
        cout << meters << " meters" << endl;
    }
};

int main() {
    Distance d1(10.0000001), d2(10.0000002);
    cout << (d1 == d2) << endl;  // Output: 1 (true) due to precision threshold
    cout << (d1 < d2) << endl;   // Output: 0 (false)
    cout << (d1 > d2) << endl;   // Output: 0 (false)
    return 0;
}
