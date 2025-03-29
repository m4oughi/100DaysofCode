#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;
    
    auto today = floor<days>(system_clock::now());
    year_month_day ymd{today};

    std::cout << "Today's date: " << int(ymd.year()) << "-" 
              << unsigned(ymd.month()) << "-" 
              << unsigned(ymd.day()) << "\n";
}
