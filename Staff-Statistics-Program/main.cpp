#include "header.h"

int main() {

	Employee e(01, "Muhammad", 55005.25);
	e.display();

	Employee e1, e2, e3;

	e1.insert();
	e1.display();

	e2.insert();
	e2.display();

	e3.insert();
	e3.display();

	e.display();
	e1.display();
	e2.display();
	e3.display();

	return 0;
}