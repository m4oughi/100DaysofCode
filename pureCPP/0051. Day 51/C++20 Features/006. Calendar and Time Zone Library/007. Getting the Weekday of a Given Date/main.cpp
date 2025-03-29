#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    year_month_day date = 2025y / 3 / 17;
    weekday wd{date}; // Get weekday

    std::cout << "March 17, 2025 is a " << wd << " (0=Sunday, 6=Saturday)\n";
}
