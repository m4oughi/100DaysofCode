#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    year_month_day today = 2025y / March / 17d;
    weekday wd = weekday{today};

    std::cout << "Today is weekday number: " << wd.c_encoding() << "\n";
    return 0;
}
