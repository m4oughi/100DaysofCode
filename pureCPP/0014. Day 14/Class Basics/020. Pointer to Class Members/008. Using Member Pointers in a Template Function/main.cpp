#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    Employee(string n, int s) : name(n), salary(s) {}
};

template <typename T, typename U>
void displayMember(T& obj, U T::*memberPtr) {
    cout << obj.*memberPtr << endl;
}

int main() {
    Employee e("John", 50000);

    // Pointer to data member
    string Employee::*namePtr = &Employee::name;
    int Employee::*salaryPtr = &Employee::salary;

    // Using template function to display data members
    displayMember(e, namePtr);
    displayMember(e, salaryPtr);

    return 0;
}
