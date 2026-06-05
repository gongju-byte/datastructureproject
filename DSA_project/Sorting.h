#ifndef SORTING_H
#define SORTING_H

#include "BookStore.h" //class declaration & constructor, getdata, setdata filename (temporary)

// Definition of the Insertion Sort method 
inline void BookStore::insertionSort(int criteria) {
    // Outer loop: tracks unsorted boundary [cite: 75]
    for (int i = 1; i < MAX_BOOKS; i++) {
        Book nextBook = books[i]; // nextBook holds the item being evaluated 
        int j = i; [cite:78]

            // Inner loop: compare nextBook with elements in the sorted portion 
            while (j > 0) {
                bool condition = false;

                // Sort criteria validation
                if (criteria == 1) {        // Sort by Author
                    condition = (books[j - 1].author > nextBook.author);
                }
                else if (criteria == 2) { // Sort by Publisher
                    condition = (books[j - 1].publisher > nextBook.publisher);
                }
                else if (criteria == 3) { // Sort by Price
                    condition = (books[j - 1].price > nextBook.price);
                }

                if (condition) {
                    books[j] = books[j - 1]; // Shift item to the right 
                    j--;                     // Move back 
                }
                else {
                    break;
                }
            }
        books[j] = nextBook; // Place the book into its correct sorted position 
    }
}

#endif