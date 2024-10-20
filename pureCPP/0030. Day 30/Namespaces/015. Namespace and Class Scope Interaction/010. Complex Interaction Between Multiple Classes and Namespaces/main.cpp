#include <iostream>

namespace Library {
    class Book {
    private:
        std::string title;
    public:
        Book(const std::string& t) : title(t) {}

        void display() {
            std::cout << "Book Title: " << title << std::endl;
        }
    };

    class LibraryCard {
    private:
        Book* borrowedBook;
    public:
        void borrowBook(Book* book) {
            borrowedBook = book;
            std::cout << "Borrowed a book." << std::endl;
        }

        void showBorrowedBook() {
            if (borrowedBook) {
                borrowedBook->display(); // Accessing Book method
            } else {
                std::cout << "No book borrowed." << std::endl;
            }
        }
    };
}

int main() {
    Library::Book myBook("1984 by George Orwell");
    Library::LibraryCard myCard;

    myCard.borrowBook(&myBook);  // Borrowing the book
    myCard.showBorrowedBook();    // Displaying borrowed book
    return 0;
}
