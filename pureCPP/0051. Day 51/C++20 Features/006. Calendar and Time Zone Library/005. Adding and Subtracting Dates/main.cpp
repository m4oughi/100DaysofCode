#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    year_month_day today = 2025y / 3 / 17;
    year_month_day next_week = today + days{7}; // Add 7 days
    year_month_day last_month = today - months{1}; // Subtract 1 month

    std::cout << "Today: " << int(today.year()) << "-" 
              << unsigned(today.month()) << "-" << unsigned(today.day()) << "\n";
    std::cout << "Next week: " << int(next_week.year()) << "-" 
              << unsigned(next_week.month()) << "-" << unsigned(next_week.day()) << "\n";
    std::cout << "Last month: " << int(last_month.year()) << "-" 
              << unsigned(last_month.month()) << "-" << unsigned(last_month.day()) << "\n";
}
