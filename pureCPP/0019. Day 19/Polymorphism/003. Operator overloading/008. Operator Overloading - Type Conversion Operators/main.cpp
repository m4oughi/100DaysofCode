#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes;
public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    // Conversion operator to convert Time to an integer (total minutes)
    operator int() const {
        return hours * 60 + minutes;
    }

    void display() const {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 30);
    int totalMinutes = t1;  // Implicitly calls conversion operator

    cout << "Total minutes: " << totalMinutes << endl;

    return 0;
}
