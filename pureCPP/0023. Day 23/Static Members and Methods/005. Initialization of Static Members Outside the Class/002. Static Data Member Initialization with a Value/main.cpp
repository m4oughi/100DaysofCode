#include <iostream>
using namespace std;

class Temperature {
public:
    static double defaultTemperature;  // Static data member
};

// Initialize static data member with a value
double Temperature::defaultTemperature = 25.5;

int main() {
    // Access the static member via class name
    cout << "Default Temperature: " << Temperature::defaultTemperature << "°C" << endl;  // Output: 25.5°C
    return 0;
}
