#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    year_month_day date = 2025y / 3 / 17; // March 17, 2025
    std::cout << "Date: " << int(date.year()) << "-" 
              << unsigned(date.month()) << "-" 
              << unsigned(date.day()) << "\n";
}
