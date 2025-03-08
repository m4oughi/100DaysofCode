#include <iostream>
#include <deque>

class Student {
public:
    std::string name;
    int score;

    Student(std::string n, int s) : name(std::move(n)), score(s) {}

    // Comparison based on score first, then name lexicographically
    bool operator<(const Student& other) const {
        return (score == other.score) ? (name < other.name) : (score < other.score);
    }

    bool operator==(const Student& other) const {
        return (score == other.score) && (name == other.name);
    }
};

int main() {
    std::deque<Student> dq1 = { {"Alice", 90}, {"Bob", 85} };
    std::deque<Student> dq2 = { {"Alice", 90}, {"Charlie", 88} };

    std::cout << std::boolalpha;

    std::cout << "dq1 < dq2: " << (dq1 < dq2) << "\n";   // true (Bob 85 < Charlie 88)
    std::cout << "dq1 > dq2: " << (dq1 > dq2) << "\n";   // false
    std::cout << "dq1 == dq2: " << (dq1 == dq2) << "\n"; // false

    return 0;
}
