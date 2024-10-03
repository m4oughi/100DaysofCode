#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    // Prefix increment
    Time& operator++() {
        ++minutes;
        if (minutes >= 60) {
            ++hours;
            minutes = 0;
        }
        return *this;
    }

    // Postfix increment
    Time operator++(int) {
        Time temp = *this;
        ++(*this);
        return temp;
    }

    void display() const {
        cout << hours << "h " << minutes << "m" << endl;
    }
};

int main() {
    Time t(1, 59);

    ++t;  // Prefix increment
    t.display();  // Output: 2h 0m

    t++;  // Postfix increment
    t.display();  // Output: 2h 1m

    return 0;
}
