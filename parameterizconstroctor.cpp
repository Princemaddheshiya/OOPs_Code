#include<iostream>
using namespace std;
class complex
{
private:
   
    int a,b;

public:
    complex(int ,int );
    void print(void ){
        cout<<"your number :"<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int x, int y)
{
    a=x;
    b=y;
    cout<<"hello world"<<endl;
}
int main(){
//complex o1;
complex o1( 2,4);
o1.print();
complex o2=complex(7,8);
o2.print();
return 0;
}