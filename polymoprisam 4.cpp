#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    bool available;

public:
    Book(const string& title, const string& author, const string& ISBN)
        : title(title), author(author), ISBN(ISBN), available(true) {}


    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    string getISBN() const {
        return ISBN;
    }

    bool isAvailable() const {
        return available;
    }


    void setTitle(const string& title) {
        this->title = title;
    }

    void setAuthor(const string& author) {
        this->author = author;
    }

    void setISBN(const string& ISBN) {
        this->ISBN = ISBN;
    }


    void checkOut() {
        if (available)
            available = false;
        else
            cout << "This book is already checked out." << endl;
    }

    void returnBook() {
        if (!available)
            available = true;
        else
            cout << "This book is already available." << endl;
    }


    void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Availability: " << (available ? "Available" : "Checked out") << endl;
    }
};

class Patron {
private:
    string name;
    string libraryCardNumber;
    vector<Book*> borrowedBooks;

public:
    Patron(const string& name, const string& libraryCardNumber)
        : name(name), libraryCardNumber(libraryCardNumber) {}


    string getName() const {
        return name;
    }

    string getLibraryCardNumber() const {
        return libraryCardNumber;
    }


    void setName(const string& name) {
        this->name = name;
    }

    void setLibraryCardNumber(const string& libraryCardNumber) {
        this->libraryCardNumber = libraryCardNumber;
    }


    void borrowBook(Book* book) {
        if (book->isAvailable()) {
            borrowedBooks.push_back(book);
            book->checkOut();
            cout << "Book '" << book->getTitle() << "' has been borrowed." << endl;
        } else {
            cout << "Book '" << book->getTitle() << "' is not available for borrowing." << endl;
        }
    }

    void returnBook(Book* book) {
        auto it = find(borrowedBooks.begin(), borrowedBooks.end(), book);
        if (it != borrowedBooks.end()) {
            borrowedBooks.erase(it);
            book->returnBook();
            cout << "Book '" << book->getTitle() << "' has been returned." << endl;
        } else {
            cout << "You haven't borrowed this book." << endl;
        }
    }


    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Library Card Number: " << libraryCardNumber << endl;
        cout << "Borrowed Books:" << endl;
        if (borrowedBooks.empty()) {
            cout << "No books borrowed." << endl;
        } else {
            for (const auto& book : borrowedBooks) {
                cout << "- " << book->getTitle() << endl;
            }
        }
    }
};

int main() {

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
    Book book2("To Kill a Mockingbird", "Harper Lee", "9780061120084");
    Book book3("1984", "George Orwell", "9780451524935");

    Patron patron("John Doe", "123456");

    patron.borrowBook(&book1);
    patron.borrowBook(&book2);
    patron.borrowBook(&book3);

    cout << "\nPatron's Information:" << endl;
    patron.displayInfo();

    patron.returnBook(&book1);

    cout << "\nUpdated Patron's Information:" << endl;
    patron.displayInfo();

    return 0;
}
