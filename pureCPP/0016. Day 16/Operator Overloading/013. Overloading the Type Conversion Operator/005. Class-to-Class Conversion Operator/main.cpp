#include <iostream>
using namespace std;

class DistanceInMeters {
    int meters;
public:
    DistanceInMeters(int m) : meters(m) {}

    // Conversion operator to convert DistanceInMeters to DistanceInKm
    operator double() const {
        return meters * 0.001;
    }

    void display() const {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

class DistanceInKm {
    double kilometers;
public:
    DistanceInKm(double km) : kilometers(km) {}

    void display() const {
        cout << "Distance: " << kilometers << " kilometers" << endl;
    }
};

int main() {
    DistanceInMeters distInMeters(1000);
    double distInKm = distInMeters;  // Implicit conversion from meters to kilometers
    cout << "Converted distance: " << distInKm << " kilometers" << endl;  // Output: 1.0 kilometers
    return 0;
}
