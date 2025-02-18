#include <iostream>
#include <stack>

class Book {
public:
    std::string title;
    int pages;

    Book(std::string t, int p) : title(t), pages(p) {}

    void print() const {
        std::cout << "Title: " << title << ", Pages: " << pages << std::endl;
    }
};

int main() {
    std::stack<Book> bookStack;
    
    bookStack.push(Book("C++ STL", 500));
    bookStack.push(Book("Design Patterns", 350));

    bookStack.top().print(); // Latest added book

    return 0;
}
