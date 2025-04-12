#include <iostream>

enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, Count };

int hoursOpen[Count] = { 8, 8, 8, 8, 8, 4, 0 };

int main() {
    Day d = Friday;
    std::cout << "Hours open on Friday: " << hoursOpen[d] << "\n";
}
