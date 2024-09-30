#include <iostream>
using namespace std;

class Book {
private:
    string title;

public:
    Book(string t) : title(t) {}

    const string& getTitle() const {  // Returning const reference
        return title;
    }

    void setTitle(const string& t) {
        title = t;
    }
};

int main() {
    Book book("C++ Programming");
    cout << "Title: " << book.getTitle() << endl;

    book.setTitle("Advanced C++");
    cout << "Updated Title: " << book.getTitle() << endl;

    return 0;
}
