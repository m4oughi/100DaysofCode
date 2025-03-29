#include <iostream>
#include <compare>

class Book {
public:
    int pages;

    Book(int p) : pages(p) {}

    std::weak_ordering operator<=>(const Book& other) const {
        return pages <=> other.pages;
    }
};

int main() {
    Book b1(200), b2(200);

    if (b1 == b2) std::cout << "Books are considered equal in ordering\n";
    if (b1 <= b2) std::cout << "b1 is less than or equal to b2\n";
}
