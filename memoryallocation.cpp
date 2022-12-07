#include<iostream>
using namespace std;
class shop
{
//private:
    /* data */
     int c;
    int a[100];
    int b[100];

public:
    void count(void);
    void setid(void);
    void printid(void);
    
};

 void shop::count(void)
 {
 c=0;
 }

void shop::setid(void)
{
    cout<<"enter the iteam id  :"<<endl;
    cin>>a[c];
    cout<<"enter the prize  :"<<endl;
    cin>>b[c];
    c++;
}
void shop::printid(void)
{
    for (int i = 0; i < c; i++)
    {
       cout<<a[i]<<","<<b[i]<<endl;
    }
    
}

int main(){
    shop gpay;
    gpay.count();
    gpay.setid();
    //gpay.setid();
    gpay.setid();
gpay.printid();
return 0;
}