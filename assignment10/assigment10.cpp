#include <iostream>
#include <string>

using namespace std;

class LibraryBook {
private:
    string id, title, author;

public:
    LibraryBook(string id, string title, string author)
        : id(id), title(title), author(author) {}

    string getId() { return id; }
    string getTitle() { return title; }
    string getAuthor() { return author; }
};

int main() {
    bool isFound = false;
    string userInputId;

    LibraryBook books[10] = {
        LibraryBook("1000", "The C++ Programming Language", "Bjarne Stroustrup"),
        LibraryBook("1001", "Design Patterns", "Erich Gamma, Richard Helm, Ralph Johnson, John Vlissides"),
        LibraryBook("1002", "The Catcher in the Rye", "J.D. Salinger"),
        LibraryBook("1003", "To Kill a Mockingbird", "Harper Lee"),
        LibraryBook("1004", "1984", "George Orwell"),
        LibraryBook("1005", "Pride and Prejudice", "Jane Austen"),
        LibraryBook("1006", "The Great Gatsby", "F. Scott Fitzgerald"),
        LibraryBook("1007", "The Hobbit", "J.R.R. Tolkien"),
        LibraryBook("1008", "Harry Potter and the Sorcerer's Stone", "J.K. Rowling"),
        LibraryBook("1009", "The Lord of the Rings", "J.R.R. Tolkien"),
    };

    cout << "Enter the ID of the book you are searching for: ";
    cin >> userInputId;

    for (int i = 0; i < 10; ++i) {
        if (books[i].getId() == userInputId) {
            cout << "Book Details:" << endl;
            cout << "Title: " << books[i].getTitle() << endl;
            cout << "Author: " << books[i].getAuthor() << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound) {
        cout << "The book with ID " << userInputId << " is not found in the library." << endl;
    }

    return 0;
}
