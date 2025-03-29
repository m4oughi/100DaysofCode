#include <iostream>
#include <chrono>
#include <format>

int main() {
    using namespace std::chrono;

    year_month_day today = floor<days>(system_clock::now());

    std::cout << std::format("Today's date: {:%Y-%m-%d}\n", today);
    return 0;
}
