#include<iostream>
using namespace std;
class student
{
protected:
    int roll_number;
public:
   void set_roll_number(int n);
   void get_roll_number(void );
};

void student::set_roll_number(int n)
{
    roll_number=n;

}

void student::get_roll_number(void)
{
    cout<<"your roll number :"<<roll_number<<endl;
}
class exam :public student
{
protected:
    float f1;
    float f2;
public:
    void setnumber(float m1 ,float m2);
    void getnumber(void);
};

void exam::setnumber(float m1 ,float m2)
{
f1=m1;
f2=m2;
}

void exam::getnumber(void)
{
    cout<<"your subject :"<<f1<<"and"<<f2<<endl;
}
class result : public exam
{
protected:
 float percentes;
public:
   void show(void){
percentes=(f1+f2)/2;
cout<<"your percentes :"<<percentes<<endl; 
   }
};



int main(){
    result prince;
    prince.set_roll_number(27);
    //prince.get_roll_number();
    prince.setnumber(25,25);
   // prince.getnumber();
prince.show();

return 0;
}