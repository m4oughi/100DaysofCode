#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    year_month_day today = 2025y / 3 / 17;
    weekday target = Friday; // Target Friday

    sys_days next_friday = sys_days{today} + days{(target - weekday{today} + 7) % 7};

    std::cout << "Next Friday falls on: " 
              << int(year_month_day{next_friday}.year()) << "-"
              << unsigned(year_month_day{next_friday}.month()) << "-"
              << unsigned(year_month_day{next_friday}.day()) << "\n";
}
