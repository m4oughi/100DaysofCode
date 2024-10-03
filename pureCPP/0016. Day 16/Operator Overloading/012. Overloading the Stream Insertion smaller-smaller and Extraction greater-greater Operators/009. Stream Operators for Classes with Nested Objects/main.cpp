#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    friend istream& operator>>(istream& is, Date& date) {
        is >> date.day >> date.month >> date.year;
        return is;
    }

    friend ostream& operator<<(ostream& os, const Date& date) {
        os << date.day << "/" << date.month << "/" << date.year;
        return os;
    }
};

class Event {
    string name;
    Date eventDate;
public:
    Event(string n = "", Date d = Date()) : name(n), eventDate(d) {}

    friend istream& operator>>(istream& is, Event& event) {
        is >> event.name >> event.eventDate;
        return is;
    }

    friend ostream& operator<<(ostream& os, const Event& event) {
        os << "Event: " << event.name << ", Date: " << event.eventDate;
        return os;
    }
};

int main() {
    Event event;
    cout << "Enter event name and date (day month year): ";
    cin >> event;
    cout << "Event details: " << event << endl;
    return 0;
}
