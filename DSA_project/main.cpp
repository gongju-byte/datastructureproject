#include <iostream>
#include <limits>
#include <string>
//#include "header.h"
using namespace std;

int main() {
	int input, sub;
	while (true) {
		string book[] = { "title1", "title2", "title3", "title4", "title5", "title6", "title7" };
		//Bookstore books();

		cout << "----- WELCOME TO BOOKSTORE! -----" << endl;
		cout << "1. View all books" << endl;
		cout << "2. Search a book" << endl;
		cout << "3. Sort books" << endl;
		cout << "0. Exit" << endl;
		cout << "Your choice: ";

		if (!(cin >> input)) {
			cin.clear();
			system("cls");
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "[!] Invalid input" << endl << endl;
			continue;
		}

		cout << endl;

		if (input == 1) {
			system("cls");
			cout << "----- VIEW BOOKS ----- " << endl;
			for (int i = 0; i < 7; i++) {
				cout << "Book " << i + 1 << ": " << book[i] << endl;
			}
		} else if (input == 2) {
			system("cls");
			cout << "----- SEARCH BY -----" << endl;
			cout << "1. Book Name" << endl;
			cout << "2. Book Author" << endl;
			cout << "3. Book Publisher" << endl;
			cout << "0. Exit" << endl;
			cout << "Your choice: ";
			if (!(cin >> sub)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "[!] Invalid input" << endl;
				continue;
			}
			if (sub == 1) {
				cout << "----- BOOK NAME ----- " << endl;
				//call method
			}
			else if (sub == 2) {
				cout << "----- BOOK AUTHOR ----- " << endl;
				//call method
			}
			else if (sub == 3) {
				cout << "----- BOOK PUBLISHER ----- " << endl;
				//call method
			}
			else if (sub == 0) {
				continue;
			}
			else {
				system("cls");
				cout << "[!] Invalid choice." << endl;
			}
		} else if (input == 3) {
			system("cls");
			cout << "----- SORT BY ----- " << endl;
			cout << "1. Price (Ascending)" << endl;
			cout << "2. Price (Descending)" << endl;
			cout << "0. Exit" << endl;
			cout << "Your choice: ";
			if (!(cin >> sub)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "[!] Invalid input" << endl;
				continue;
			}
			if (sub == 1) {
				cout << "----- PRICE (ASCENDING) ----- " << endl;
				//call method
			} else if (sub == 2) {
				cout << "----- PRICE (DESCENDING) ----- " << endl;
				//call method
			}
			else if (sub == 0) {
				continue;
			} else{
				system("cls");
				cout << "[!] Invalid choice." << endl;
			}
		} else if (input == 0) {
			system("cls");
			cout << "[!] Bye Bye" << endl;
			break;
		} else {
			system("cls");
			cout << "[!] Invalid choice." << endl;
		}
		cout << endl;
	}

	return 0;
}