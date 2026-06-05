#pragma once
#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 7;

class Bookstore {
private:
    string title[MAX_BOOKS];
    string author[MAX_BOOKS];
    string publisher[MAX_BOOKS];
    double price[MAX_BOOKS];

public:
    Bookstore();

    void setData(string[], string[], string[], double[]);
    void displayBooks();
    int searchTitle(string);
    int searchAuthor(string);
    int searchPublisher(string);
    void sortPriceAscending();
    void sortPriceDescending();
};

inline Bookstore::Bookstore() {
}

inline void Bookstore::setData(string t[], string a[],
    string p[], double pr[]) {

    for (int i = 0; i < MAX_BOOKS; i++) {
        title[i] = t[i];
        author[i] = a[i];
        publisher[i] = p[i];
        price[i] = pr[i];
    }
}

inline int Bookstore::searchTitle(string target) {

    for (int i = 0; i < MAX_BOOKS; i++) {
        if (title[i] == target)
            return i;
    }

    return -1;
}

inline int Bookstore::searchAuthor(string target) {

    for (int i = 0; i < MAX_BOOKS; i++) {
        if (author[i] == target)
            return i;
    }

    return -1;
}

inline int Bookstore::searchPublisher(string target) {

    for (int i = 0; i < MAX_BOOKS; i++) {
        if (publisher[i] == target)
            return i;
    }

    return -1;
}

inline void Bookstore::sortPriceAscending() {

    int minIndex;

    for (int i = 0; i < MAX_BOOKS - 1; i++) {

        minIndex = i;

        for (int j = i + 1; j < MAX_BOOKS; j++) {
            if (price[j] < price[minIndex])
                minIndex = j;
        }

        swap(price[i], price[minIndex]);
        swap(title[i], title[minIndex]);
        swap(author[i], author[minIndex]);
        swap(publisher[i], publisher[minIndex]);
    }
}

inline void Bookstore::sortPriceDescending() {

    int maxIndex;

    for (int i = 0; i < MAX_BOOKS - 1; i++) {

        maxIndex = i;

        for (int j = i + 1; j < MAX_BOOKS; j++) {
            if (price[j] > price[maxIndex])
                maxIndex = j;
        }

        swap(price[i], price[maxIndex]);
        swap(title[i], title[maxIndex]);
        swap(author[i], author[maxIndex]);
        swap(publisher[i], publisher[maxIndex]);
    }
}

inline void Bookstore::displayBooks() {

    for (int i = 0; i < MAX_BOOKS; i++) {

        cout << "Title: " << title[i] << endl;
        cout << "Author: " << author[i] << endl;
        cout << "Publisher: " << publisher[i] << endl;
        cout << "Price: RM" << price[i] << endl;
        cout << endl;
    }
}






//SEARCH BY TITLE, PUBLISHER, AUTHOR


//SORT BY PRICE ASCENDING AND DESCENDING