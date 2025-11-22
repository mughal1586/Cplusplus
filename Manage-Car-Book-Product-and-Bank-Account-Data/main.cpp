#include"car.h"
#include"book.h"
#include"product.h"
#include"bankacc.h"

int main()
{
	Car c;
	
	Car cp("Honda", "civic", "black", 12);
	cp.display();

	c.insert();
	c.display();

	Book b;
	
	Book bp(0012134, "Sahih Bukhari", "Imam Bukhari", 780.00);
	bp.display();
	
	b.insert();
	b.display();

	Product p;

	Product pp(01, "Rim", 1200, 4);
	pp.display();

	p.insert();
	p.display();

	BankAcc ba;
	
	BankAcc bap(2456865, "Muhammad", "Saving", 85000000);
	bap.display();

	ba.insert();
	ba.display();

	return 0;
}