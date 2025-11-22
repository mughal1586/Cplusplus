#include"header.h"

using namespace std;

/**************************** -- Getter -- ****************************/
int Date::get_day() {
	return day;
}
int Date::get_month() {
	return month;
}
int Date::get_year() {
	return year;
}
/**************************** -- Setter -- ****************************/
void Date::set_day(int new_day) {
	day = new_day;
}
void Date::set_month(int new_month) {
	month = new_month;
}
void Date::set_year(int new_year) {
	year = new_year;
}

void Date :: displayDate() {
	cout << day << "/" << month << "/" << year << endl;
}