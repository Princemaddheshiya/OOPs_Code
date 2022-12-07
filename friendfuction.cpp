#include<iostream>
using namespace std;
class complex
{
//private:
    /* data */
    int a,b;
public:
 void takenumber(int n1 ,int n2){
    a=n1;
    b=n2;
 }
friend complex sumcomplex(complex o1 ,complex o2);
    void printcomplex(void){
        cout<<"your complex number :"<<a<<"+"<<b<<"i"<<endl;
    }
};

complex  sumcomplex(complex o1 ,complex o2){
    complex o3;
    o3.takenumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
complex o1,o2,sum;
o1.takenumber(2,3);
o1.printcomplex();
o2.takenumber(3,2);
o2.printcomplex();
sum=sumcomplex(o1,o2);
sum.printcomplex();
return 0;
}