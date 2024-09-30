#include <iostream>
using namespace std;

class Library {
private:
    static int totalBooks;
    string bookTitle;

public:
    Library(string title) : bookTitle(title) {
        totalBooks++;
    }

    void display() const {
        cout << "Book: " << bookTitle << ", Total Books: " << totalBooks << endl;
    }

    static int getTotalBooks() {
        return totalBooks;
    }
};

// Initialize static member
int Library::totalBooks = 0;

int main() {
    Library book1("C++ Programming"), book2("Data Structures");

    book1.display();
    book2.display();
    cout << "Total Books in Library: " << Library::getTotalBooks() << endl;

    return 0;
}
