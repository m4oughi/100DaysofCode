#include <iostream>
using namespace std;

class Book {
public:
    string title;
    double price;

    Book(string t, double p) : title(t), price(p) {}

    void display() {
        cout << "Title: " << title << ", Price: $" << price << endl;
    }
};

int main() {
    Book* book = new Book("C++ Programming", 29.99);  // Dynamic object creation

    book->display();  // Accessing members using pointer

    delete book;  // Deleting dynamic object
    return 0;
}
