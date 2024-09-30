#include <iostream>
using namespace std;

struct EmployeeStruct {
    string name;
    int id;
};

class EmployeeClass {
private:
    string name;
    int id;
public:
    void setData(string n, int i) {
        name = n;
        id = i;
    }

    void display() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    EmployeeStruct es = {"John", 101};
    cout << "Struct Employee - Name: " << es.name << ", ID: " << es.id << endl;

    EmployeeClass ec;
    ec.setData("Jane", 102);
    ec.display();

    return 0;
}
