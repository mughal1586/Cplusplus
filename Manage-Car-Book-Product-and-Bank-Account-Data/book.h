#include<iostream>
#include<string>

using namespace std;

class Book {
private:
	int ISBN;
	string title;
	string author;
	float price;
public:
	/********************************* -- Constructor -- *********************************/
	Book();
	Book(int ISBN, string title, string author, float price);
	/*********************************** -- Getter -- ***********************************/
	int get_ISBN();
	string get_title();
	string get_author();
	float get_price();
	/*********************************** -- Setter -- ***********************************/
	void set_ISBN(int ISBN);
	void set_title(string title);
	void set_author(string author);
	void set_price(float price);
	/*********************************** -- Others -- ***********************************/
	void insert();
	void display();
};