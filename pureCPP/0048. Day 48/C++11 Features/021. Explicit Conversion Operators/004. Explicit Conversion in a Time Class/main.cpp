#include <iostream>

class Time {
    int hours, minutes;
public:
    Time(int h, int m) : hours(h), minutes(m) {}

    explicit operator int() const { // Converts to total minutes
        return hours * 60 + minutes;
    }
};

int main() {
    Time t(2, 30); // 2 hours, 30 minutes

    // int totalMinutes = t; // Error: Explicit conversion prevents implicit use
    int totalMinutes = static_cast<int>(t); // Works correctly

    std::cout << "Total Minutes: " << totalMinutes << std::endl;
    return 0;
}
