#include<iostream>
using namespace std;
class base
{
private:
int data1;

public:
int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base::setdata(void)
{
    data1=10;
    data2=20;
}

int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
class derive : base
{
int data3;
public:
void process(void){
    setdata();
    data3=data2*getdata1();
}
    void display(){
        cout<<getdata1()<<endl;
        cout<<data2<<endl;
        cout<<data3<<endl;
    }
};


int main(){
derive der;
//der.setdata();
der.process();
der.display();
return 0;
}