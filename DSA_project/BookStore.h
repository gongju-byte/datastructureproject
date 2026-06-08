#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <iostream>
#include <string>
using namespace std;
const int MAX_BOOKS = 7;

class BookStore {
private:
    string title[MAX_BOOKS];
    string author[MAX_BOOKS];
    string publisher[MAX_BOOKS];
    double price[MAX_BOOKS];

public:
    BookStore();
    void insertionSort(int criteria);
    void setData(string t[], string a[], string p[], double pr[]);
    void displayBooks();

    int searchTitle(string target);
    int searchAuthor(string target);
    int searchPublisher(string target);
    void sortPriceAscending();
    void sortPriceDescending();
};

inline BookStore::BookStore() {
}

inline void BookStore::setData(string t[], string a[],string p[], double pr[]) {

    for (int i = 0; i < MAX_BOOKS; i++) {
        title[i] = t[i];
        author[i] = a[i];
        publisher[i] = p[i];
        price[i] = pr[i];
    }
}

inline int BookStore::searchTitle(string target) {
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (title[i] == target)
            return i;
    }
    return -1;
}

inline int BookStore::searchAuthor(string target) {
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (author[i] == target)
            return i;
    }
    return -1;
}

inline int BookStore::searchPublisher(string target) {
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (publisher[i] == target)
            return i;
    }
    return -1;
}

inline void BookStore::sortPriceAscending() {
    // Search functions
    void searchByTitle(string key);
    void searchByAuthor(string key);
    void searchByPublisher(string key);

inline void Bookstore::sortPriceAscending() {

    int minIndex;

    for (int i = 0; i < MAX_BOOKS - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < MAX_BOOKS; j++) {
            if (price[j] < price[minIndex])
                minIndex = j;
        }

        // Manual swap for double (price)
        double tempPrice = price[i];
        price[i] = price[minIndex];
        price[minIndex] = tempPrice;

        // Manual swap for string (title)
        string tempTitle = title[i];
        title[i] = title[minIndex];
        title[minIndex] = tempTitle;

        // Manual swap for string (author)
        string tempAuthor = author[i];
        author[i] = author[minIndex];
        author[minIndex] = tempAuthor;

        // Manual swap for string (publisher)
        string tempPub = publisher[i];
        publisher[i] = publisher[minIndex];
        publisher[minIndex] = tempPub;

    }
}

inline void BookStore::sortPriceDescending() {
    for (int i = 0; i < MAX_BOOKS - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < MAX_BOOKS; j++) {
            if (price[j] > price[maxIndex])
                maxIndex = j;
        }
        // Manual swap for double (price)
        double tempPrice = price[i];
        price[i] = price[maxIndex];
        price[maxIndex] = tempPrice;

        // Manual swap for string (title)
        string tempTitle = title[i];
        title[i] = title[maxIndex];
        title[maxIndex] = tempTitle;

        // Manual swap for string (author)
        string tempAuthor = author[i];
        author[i] = author[maxIndex];
        author[maxIndex] = tempAuthor;

        // Manual swap for string (publisher)
        string tempPub = publisher[i];
        publisher[i] = publisher[maxIndex];
        publisher[maxIndex] = tempPub;
    }
}

inline void BookStore::displayBooks() {
    for (int i = 0; i < MAX_BOOKS; i++) {
        cout << "Title: " << title[i] << endl;
        cout << "Author: " << author[i] << endl;
        cout << "Publisher: " << publisher[i] << endl;
        cout << "Price: RM" << price[i] << endl;
        cout << "--------------------------------------------\n";
    }
}
