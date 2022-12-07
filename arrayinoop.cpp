#include<iostream>
using namespace std;
class kirana
{
private:
int data1,data2;
public:
    void setdata(int data1 ,int data2){
        this->data1=data1;
        this->data2=data2;       
    }
    void getdata(void){
       cout<<"your data1:"<<data1<<endl;
       cout<<"your data2:"<<data2<<endl;

    }   
};
int main(){
kirana *ptr =new kirana[3];
kirana *ptrtemp =ptr;
int size=3,i,p,q;
for ( i = 0; i < size; i++)
{
    cout<<"plz enter the data1 and data2 :"<<endl;
    cin>>p>>q;
    ptr->setdata(p,q);
    ptr++;
}
for ( i = 0; i < size; i++)
{
    ptrtemp->getdata();
ptrtemp++;
}
return 0;
}