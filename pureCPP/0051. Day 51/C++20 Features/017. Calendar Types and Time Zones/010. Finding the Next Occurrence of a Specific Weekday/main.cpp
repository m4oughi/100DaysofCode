#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    year_month_day today = 2025y / March / 17d;
    weekday wd = weekday{today};
    auto next_monday = year_month_day{today + days{(8 - wd.c_encoding()) % 7}};

    std::cout << "Next Monday is on: " << int(next_monday.year()) 
              << "-" << unsigned(next_monday.month()) 
              << "-" << unsigned(next_monday.day()) << "\n";

    return 0;
}
