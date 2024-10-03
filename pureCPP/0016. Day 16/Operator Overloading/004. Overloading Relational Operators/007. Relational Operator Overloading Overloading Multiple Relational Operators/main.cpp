#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    Time(int h, int m) : hours(h), minutes(m) {}

    bool operator<(const Time& other) const {
        return (hours * 60 + minutes) < (other.hours * 60 + other.minutes);
    }

    bool operator<=(const Time& other) const {
        return (hours * 60 + minutes) <= (other.hours * 60 + other.minutes);
    }

    bool operator>(const Time& other) const {
        return (hours * 60 + minutes) > (other.hours * 60 + other.minutes);
    }

    bool operator>=(const Time& other) const {
        return (hours * 60 + minutes) >= (other.hours * 60 + other.minutes);
    }

    void display() const {
        cout << hours << "h " << minutes << "m" << endl;
    }
};

int main() {
    Time t1(3, 45), t2(4, 15);
    cout << (t1 < t2) << endl;  // Output: 1 (true)
    cout << (t1 <= t2) << endl; // Output: 1 (true)
    cout << (t1 > t2) << endl;  // Output: 0 (false)
    cout << (t1 >= t2) << endl; // Output: 0 (false)
    return 0;
}
