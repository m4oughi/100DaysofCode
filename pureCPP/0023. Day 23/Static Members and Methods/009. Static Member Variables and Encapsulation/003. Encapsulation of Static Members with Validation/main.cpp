#include <iostream>
using namespace std;

class TemperatureController {
private:
    static int maxTemperature;  // Private static member variable

public:
    static void setMaxTemperature(int temp) {
        if (temp > 0 && temp <= 100) {  // Validate input
            maxTemperature = temp;
        } else {
            cout << "Temperature out of bounds!" << endl;
        }
    }

    static int getMaxTemperature() {
        return maxTemperature;
    }
};

// Initialize private static member
int TemperatureController::maxTemperature = 50;  // Default value

int main() {
    TemperatureController::setMaxTemperature(75);  // Valid input
    cout << "Max Temperature: " << TemperatureController::getMaxTemperature() << endl;  // Output: 75

    TemperatureController::setMaxTemperature(150);  // Invalid input, validation will fail
    return 0;
}
