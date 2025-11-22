#include<iostream>
#include<string>

using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:
	/**************************** -- Constructor -- ****************************/
	Date() {
		day = 25;
		month = 7;
		year = 2006;
}
	/**************************** -- Getter -- ****************************/
	int get_day();
	int get_month();
	int get_year();
	/**************************** -- Setter -- ****************************/
	void set_day(int new_day);
	void set_month(int new_month);
	void set_year(int new_year);

	void displayDate();
};