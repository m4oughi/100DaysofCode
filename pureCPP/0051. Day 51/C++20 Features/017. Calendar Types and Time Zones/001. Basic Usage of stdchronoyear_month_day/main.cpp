#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    year_month_day today = 2025y / March / 17d;
    std::cout << "Today's date: " << int(today.year()) << "-" 
              << unsigned(today.month()) << "-" << unsigned(today.day()) << "\n";

    return 0;
}
