#include <iostream>
using namespace std;

class Distance {
public:
    int meters;
    Distance(int m) : meters(m) {}  // Conversion constructor
};

int main() {
    Distance d = 100;  // Implicitly converts int to Distance using constructor
    cout << "Distance: " << d.meters << " meters" << endl;
    return 0;
}
