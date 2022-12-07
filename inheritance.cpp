#include<iostream>
using namespace std;
class baseclass
{

public:
int data;
int salary;
    baseclass(int dataid){
        data=dataid;
salary=56;
        
    }
    baseclass(){

    }
};
class derive : public baseclass
{


public:
 int data;
 derive( int dataid){
 data=dataid;
  }
    
};
 

int main(){

baseclass n1(1),n2(2);
cout<<n1.data<<endl;
cout<<n2.data<<endl;
cout<<n1.salary<<endl;
cout<<n2.salary<<endl;
derive n3(67);
cout<<n3.data<<endl;
cout<<n3.salary<<endl;

return 0;
}