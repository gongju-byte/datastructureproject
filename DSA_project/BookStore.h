#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <iostream>
#include <string>

using namespace std;

const int MAXBOOKS = 7;

// Structure for a Book
struct Book {
    string title;
    string author;
    string publisher;
    double price;
};

// BookStore Class
class BookStore {
public:
    BookStore();

    // Search functions
    void searchByTitle(string key);
    void searchByAuthor(string key);
    void searchByPublisher(string key);

    // Sorting function
    void insertionSort(int criteria);

    // Optional display
    void displayAll();

private:
    Book books[MAXBOOKS];
};

#endif