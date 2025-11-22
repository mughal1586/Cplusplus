#include"book.h"

/********************************* -- Constructor -- *********************************/
Book::Book() {
	ISBN = 0;
	title = "";
	author = "";
	price = 0;
}
Book::Book(int ISBN, string title, string author, float price) {
	this->ISBN = ISBN;
	this->title = title;
	this->author = author;
	this->price = price;
}
/*********************************** -- Getter -- ***********************************/
int Book::get_ISBN() {
	return ISBN;
}
string Book::get_title() {
	return title;
}
string Book::get_author() {
	return author;
}
float Book::get_price() {
	return price;
}
/*********************************** -- Setter -- ***********************************/
void Book::set_ISBN(int ISBN) {
	this->ISBN = ISBN;
}
void Book::set_title(string title) {
	this->title = title;
}
void Book::set_author(string author) {
	this->author = author;
}
void Book::set_price(float price) {
	this->price = price;
}
/*********************************** -- Others -- ***********************************/
void Book::insert() {
	cout << "\t-: Inserting Book Details :-" << endl;
	cout << "Enter ISBN = " << endl;
	cin >> ISBN;
	if (ISBN <= 0) {
		cout << "\a\tInvalid Input !!!" << endl;
		return;
	}
	cin.ignore();
	cout << "Enter title = " << endl;
	getline(cin, title);
	cout << "Enter auhor = " << endl;
	getline(cin, author);
	cin.ignore();
	cout << "Enter price = " << endl;
	cin >> price;
	if (price <= 0) {
		cout << "\a\tInvalid Input !!!" << endl;
	}
}
void Book::display() {
	cout << "\t-: Displaying Book Details :-" << endl;
	cout << "ISBN = " << ISBN << endl;
	cout << "Title = " << title << endl;
	cout << "Author = " << author << endl;
	cout << "Price = " << price << endl;
}