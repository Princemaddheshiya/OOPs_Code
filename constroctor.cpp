#include<iostream>
using namespace std;
class complex
{
private:
    /* data */
    int a,b;

public:
    void print(void ){
        cout<<"your number :"<<a<<"+"<<b<<"i"<<endl;
    }
    complex(void);
};

complex::complex(void)
{
    a=12;
    b=23;
    cout<<"hello world"<<endl;
}



int main(){
complex o1,o2;
o1.print();
o2.print();
return 0;
}