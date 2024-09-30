#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    void setCelsius(double temp) {
        if (temp >= -273.15) // Validating against absolute zero
            celsius = temp;
        else
            cout << "Invalid temperature!" << endl;
    }

    double getCelsius() {
        return celsius;
    }

    double convertToFahrenheit() {
        return (celsius * 9/5) + 32;
    }
};

int main() {
    Temperature temp;
    temp.setCelsius(-280);  // Invalid temperature
    temp.setCelsius(25);    // Valid temperature

    cout << "Temperature in Celsius: " << temp.getCelsius() << endl;
    cout << "Temperature in Fahrenheit: " << temp.convertToFahrenheit() << endl;
    return 0;
}
