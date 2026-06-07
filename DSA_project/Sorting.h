#ifndef SORTING_H
#define SORTING_H
#include "BookStore.h" //class declaration & constructor, getdata, setdata filename (temporary)

// Definition of the Insertion Sort method 
inline void BookStore::insertionSort(int criteria) {
    // Outer loop: tracks unsorted boundary [cite: 75]
    for (int i = 1; i < MAX_BOOKS; i++) {

        string nextTitle = title[i];
        string nextAuthor = author[i];
        string nextPublisher = publisher[i];
        double nextPrice = price[i];

        int j = i;

        // Inner loop: compare nextBook with elements in the sorted portion 
        while (j > 0) {
            bool condition = false;

            // Sort criteria validation
            if (criteria == 1) {        // Sort by Author alphabetically
                condition = (author[j - 1] > nextAuthor);
            }
            else if (criteria == 2) { // Sort by Publisher
                condition = (publisher[j - 1] > nextPublisher);
            }
            else if (criteria == 3) { // Sort by Price
                condition = (price[j - 1] > nextPrice);
            }

            if (condition) {

                title[j] = title[j - 1];
                author[j] = author[j - 1];
                publisher[j] = publisher[j - 1];
                price[j] = price[j - 1];
                j--;                     // Move back 
            }
            else {
                break;
            }
        }
        // Place the book data into its correct sorted position across all arrays
        title[j] = nextTitle;
        author[j] = nextAuthor;
        publisher[j] = nextPublisher;
        price[j] = nextPrice;
    }
}

#endif