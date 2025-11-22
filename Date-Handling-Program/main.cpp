#include "header.h"

using namespace std;

int main() {
	Date d1;
	d1.displayDate();
	Date d2;
	d2.set_day(15);
	d2.set_month(8);
	d2.set_year(2006);

	d2.displayDate();

	Date d3;
	int day = 0, month = 0, year = 0;
	cout << "Enter your birth date = " << endl;
	cin >> day;
	cout << "Enter your birth month (in numbers) = " << endl;
	cin >> month;
	cout << "Enter your birth year = " << endl;
	cin >> year;

	d3.set_day(day);
	d3.set_month(month);
	d3.set_year(year);

	d3.displayDate();

	return 0;
}