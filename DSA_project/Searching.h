#ifndef SEARCHING_H
#define SEARCHING_H

#include <iostream>
#include <string>
#include "Bookstore.h"

using namespace std;

// Linear Search by Title
inline void BookStore::searchByTitle(string key) {
    bool found = false;

    for (int i = 0; i < MAXBOOKS; i++) {
        if (books[i].title == key) {
            cout << "\n[FOUND]\n";
            cout << "Title     : " << books[i].title << endl;
            cout << "Author    : " << books[i].author << endl;
            cout << "Publisher : " << books[i].publisher << endl;
            cout << "Price     : RM " << books[i].price << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "\n[!] Book not found.\n";
    }
}

// Linear Search by Author
inline void BookStore::searchByAuthor(string key) {
    bool found = false;

    for (int i = 0; i < MAXBOOKS; i++) {
        if (books[i].author == key) {
            cout << "\n[FOUND]\n";
            cout << "Title     : " << books[i].title << endl;
            cout << "Author    : " << books[i].author << endl;
            cout << "Publisher : " << books[i].publisher << endl;
            cout << "Price     : RM " << books[i].price << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "\n[!] Author not found.\n";
    }
}

// Linear Search by Publisher
inline void BookStore::searchByPublisher(string key) {
    bool found = false;

    for (int i = 0; i < MAXBOOKS; i++) {
        if (books[i].publisher == key) {
            cout << "\n[FOUND]\n";
            cout << "Title     : " << books[i].title << endl;
            cout << "Author    : " << books[i].author << endl;
            cout << "Publisher : " << books[i].publisher << endl;
            cout << "Price     : RM " << books[i].price << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "\n[!] Publisher not found.\n";
    }
}

#endif