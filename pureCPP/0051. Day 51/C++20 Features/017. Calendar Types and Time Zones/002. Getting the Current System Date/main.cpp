#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    system_clock::time_point now = system_clock::now();
    year_month_day today = floor<days>(now);

    std::cout << "Current date: " << int(today.year()) << "-" 
              << unsigned(today.month()) << "-" << unsigned(today.day()) << "\n";

    return 0;
}
