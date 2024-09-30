#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    friend Time addTimes(const Time &t1, const Time &t2);  // Friend function declaration

    void display() const {
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }
};

Time addTimes(const Time &t1, const Time &t2) {
    int totalMinutes = t1.minutes + t2.minutes;
    int totalHours = t1.hours + t2.hours + totalMinutes / 60;
    totalMinutes %= 60;

    return Time(totalHours, totalMinutes);  // Returning a new object from a friend function
}

int main() {
    Time t1(2, 45);
    Time t2(1, 30);

    Time totalTime = addTimes(t1, t2);  // Storing the returned object
    totalTime.display();

    return 0;
}
