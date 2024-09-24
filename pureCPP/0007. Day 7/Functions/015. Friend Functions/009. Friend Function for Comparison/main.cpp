#include <iostream>

class Time {
private:
    int hours, minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    // Friend function declaration for comparison
    friend bool operator<(const Time& t1, const Time& t2);
};

// Friend function for comparing two Time objects
bool operator<(const Time& t1, const Time& t2) {
    if (t1.hours < t2.hours) return true;
    if (t1.hours == t2.hours && t1.minutes < t2.minutes) return true;
    return false;
}

int main() {
    Time t1(3, 45), t2(4, 30);

    if (t1 < t2) {
        std::cout << "t1 is earlier than t2" << std::endl;
    } else {
        std::cout << "t1 is not earlier than t2" << std::endl;
    }

    return 0;
}
