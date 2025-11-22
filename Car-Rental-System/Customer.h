#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
    string name;
    int id;
public:
    /**************************** -- Constructor -- ****************************/
    Customer();
    Customer(string name, int id);
    Customer(const Customer& c);

    /**************************** -- Getter -- ****************************/
    string get_name();
    int get_id();

    /**************************** -- Setter -- ****************************/
    void set_name(string name);
    void set_id(int id);

    /**************************** -- Other -- ****************************/
    void displayCustomerInfo();
};