#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bookstore {
private:
    string title;
    string author;
    string publisher;
    double price;

public:
    Bookstore();

    void setTitle(string);
    void setAuthor(string);
    void setPublisher(string);
    void setPrice(double);

    string getTitle();
    string getAuthor();
    string getPublisher();
    double getPrice();

    void getData();
};



//SEARCH BY TITLE, PUBLISHER, AUTHOR


//SORT BY PRICE ASCENDING AND DESCENDING