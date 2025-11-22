#include<iostream>
#include<string>
using namespace std;

class Invoice {
private:
    string part_number;
    string part_description;
    int quantity;
    double price_per_item;
public:
    /**************************************** -- Constructor -- ****************************************/
    Invoice() {
        part_number = "";
        part_description = "";
        quantity = 0;
        price_per_item = 0.0;
    }

    /**************************************** -- Getter -- ****************************************/
    string get_part_number();
    string get_part_description();
    int get_quantity();
    double get_price_per_item();

    /**************************************** -- Setter -- ****************************************/
    void set_part_number(string new_part_number);
    void set_part_description(string new_part_description);
    void set_quantity(int new_quantity);
    void set_price_per_item(double new_price_per_item);

    void insert();
    void display();
    double invoiceAmount();
};
