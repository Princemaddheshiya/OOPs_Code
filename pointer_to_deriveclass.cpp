#include <iostream>
using namespace std;
class base
{
private:
public:
    int var_base;
    virtual void display()
    {
        cout << "your base number in base class is  :" << var_base << endl;
    }
};
class derive : public base
{
private:
public:
    int var_derive;
    virtual   void display()
    {
        cout << "your  var_base number is  :" << var_base << endl;
        cout << "your var_derive number is  :" << var_derive << endl;
    }
};
int main()
{
    base *base_pointer;
    base obj_base;
    derive obj_derive;
    //derive_pointer = &var_base;
    base_pointer = &obj_derive;
    base_pointer->var_base = 2700;
    //base_pointer->var_derive = 2021;
    base_pointer->display() ;
    //derive *derive_pointer;
    //derive_pointer = &var_base;
    // derive_pointer = &obj_derive;
    // derive_pointer->var_base = 27;
    // derive_pointer->var_derive = 2021;
    // derive_pointer->display() ;
    return 0;
}