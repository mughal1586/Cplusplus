#include "header.h"

using namespace std;

int main() {
    Invoice inv1;

    inv1.set_part_number("65647");
    inv1.set_part_description("Car");
    inv1.set_quantity(5);
    inv1.set_price_per_item(10000.50);

    cout << "Part Number = " << inv1.get_part_number() << endl;
    cout << "Part Description = " << inv1.get_part_description() << endl;
    cout << "Quantity = " << inv1.get_quantity() << endl;
    cout << "Price Per Item = " << inv1.get_price_per_item() << endl;

    Invoice inv2;
    cout << "\a\t\t******** -- Taking input from user --  ********" << endl;
    inv2.insert();
    cout << "Details entered by User are :" << endl;
    inv2.display();
    cout << "Invoice Amount: " << inv2.invoiceAmount() << endl;

    return 0;
}
