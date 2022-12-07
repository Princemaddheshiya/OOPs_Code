#include<iostream>
using namespace std;
class complex;
class calculate
{


public:
 int sumrealcomplex(complex ,complex);
 int sumcomplex(complex ,complex);
     
};
 

class complex
{

    int a,b;
    //you write individuale calculate class function
 /*friend int calculate:: sumrealcomplex(complex ,complex);
 friend int calculate:: sumcomplex(complex ,complex);*/
 //you are make friend class is your friend
 friend class calculate ;
public:
    void takecomplex(int n1 ,int n2){
        a=n1;
        b=n2;
    }
    void printcomplex(void){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    
};

int calculate::sumrealcomplex(complex o1,complex o2)
{
    return ((o1.a)+(o2.a));
}
int calculate::sumcomplex(complex o1,complex o2)
{
    return ((o1.b)+(o2.b));
}



int main(){
complex o1,o2;
o1.takecomplex(2,3);
o1.printcomplex();
o2.takecomplex(3,2);
o2.printcomplex();
calculate cal;
int res1=cal.sumrealcomplex(o1,o2);
cout<<"your number :"<<res1<<endl;
int res2=cal.sumcomplex(o1,o2);
cout<<"your number :"<<res2<<"i"<<endl;
return 0;
}