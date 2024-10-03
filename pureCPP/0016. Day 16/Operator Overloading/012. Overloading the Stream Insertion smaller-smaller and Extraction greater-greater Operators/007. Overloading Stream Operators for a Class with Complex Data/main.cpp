#include <iostream>
using namespace std;

class Address {
    string city;
    string country;
public:
    Address(string c = "", string cntry = "") : city(c), country(cntry) {}

    // Overload the stream extraction operator
    friend istream& operator>>(istream& is, Address& addr) {
        is >> addr.city >> addr.country;
        return is;
    }

    // Overload the stream insertion operator
    friend ostream& operator<<(ostream& os, const Address& addr) {
        os << "City: " << addr.city << ", Country: " << addr.country;
        return os;
    }
};

class Person {
    string name;
    int age;
    Address address;
public:
    Person(string n = "", int a = 0) : name(n), age(a) {}

    // Overload the stream extraction operator
    friend istream& operator>>(istream& is, Person& person) {
        is >> person.name >> person.age >> person.address;
        return is;
    }

    // Overload the stream insertion operator
    friend ostream& operator<<(ostream& os, const Person& person) {
        os << "Name: " << person.name << ", Age: " << person.age << ", Address: " << person.address;
        return os;
    }
};

int main() {
    Person p;
    cout << "Enter name, age, city, and country: ";
    cin >> p;
    cout << "Person details: " << p << endl;
    return 0;
}
