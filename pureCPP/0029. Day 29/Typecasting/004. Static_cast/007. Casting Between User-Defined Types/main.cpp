#include <iostream>
using namespace std;

class Distance {
    float meters;
public:
    Distance(float m) : meters(m) {}
    operator float() const { return meters; }  // Conversion operator to float
};

int main() {
    Distance d(100.5f);
    float meters = static_cast<float>(d);  // Static cast from user-defined type to float
    cout << "Distance in meters: " << meters << endl;
    return 0;
}
