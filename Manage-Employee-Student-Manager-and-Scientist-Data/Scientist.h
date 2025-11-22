#include <iostream>

using namespace std;

class Scientist {
private:
    int pubs;
public:
    /****************************** -- Constructor -- ******************************/
    Scientist();
    Scientist(int pubs);
    Scientist(const Scientist& s);

    /****************************** -- Getter -- ******************************/
    int get_pubs();

    /****************************** -- Setter -- ******************************/
    void set_pubs(int pubs);

    /****************************** -- Other -- ******************************/
    void getData();
    void putData();
};