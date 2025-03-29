#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    year_month_day today = 2025y / March / 17d;

    year_month_day next_week = today + days(7);
    year_month_day next_month = today + months(1);
    year_month_day next_year = today + years(1);

    std::cout << "Today: " << int(today.year()) << "-" << unsigned(today.month()) 
              << "-" << unsigned(today.day()) << "\n";
    std::cout << "Next week: " << int(next_week.year()) << "-" 
              << unsigned(next_week.month()) << "-" << unsigned(next_week.day()) << "\n";
    std::cout << "Next month: " << int(next_month.year()) << "-" 
              << unsigned(next_month.month()) << "-" << unsigned(next_month.day()) << "\n";
    std::cout << "Next year: " << int(next_year.year()) << "-" 
              << unsigned(next_year.month()) << "-" << unsigned(next_year.day()) << "\n";

    return 0;
}
