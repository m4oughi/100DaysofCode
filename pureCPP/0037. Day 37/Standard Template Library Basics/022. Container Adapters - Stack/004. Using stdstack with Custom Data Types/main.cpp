#include <iostream>
#include <stack>

struct Book {
    std::string title;
    int pages;
};

int main() {
    std::stack<Book> books;

    books.push({"C++ Primer", 1024});
    books.push({"Effective C++", 300});

    std::cout << "Top book: " << books.top().title << ", Pages: " << books.top().pages << "\n";

    books.pop();
    std::cout << "Top book after pop: " << books.top().title << "\n";

    return 0;
}
