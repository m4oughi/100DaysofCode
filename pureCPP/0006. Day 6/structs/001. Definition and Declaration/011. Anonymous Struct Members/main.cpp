#include <iostream>

struct Employee {
    std::string name;
    struct {
        int day;
        int month;
        int year;
    } dob; // Anonymous struct
};


int main() {

    return 0;
}