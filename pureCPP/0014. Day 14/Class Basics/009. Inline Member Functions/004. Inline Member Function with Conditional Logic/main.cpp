#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature(double temp) : celsius(temp) {}

    // Inline member function with conditional logic
    inline string checkWeather() {
        return (celsius > 30) ? "Hot" : "Cool";
    }
};

int main() {
    Temperature t1(35);
    Temperature t2(20);

    cout << "Weather is: " << t1.checkWeather() << endl;
    cout << "Weather is: " << t2.checkWeather() << endl;

    return 0;
}
