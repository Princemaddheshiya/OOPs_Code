#include<iostream>
using namespace std;
class base
{
    protected :
    int c;
private:
    /* data */
    int b;
public:
    int a;
    void setdata(void){
        a=20;b=30;c=10;
    }
};

class derive : public base
{
private:
    /* data */
public:
    
};




int main(){
base b;
derive d;
d.setdata();
cout<<d.b<<endl;
return 0;
}