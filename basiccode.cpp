#include<iostream>
using namespace std;
class binary
{
    string a;

public:
    void takedata(void);
    void print(void);
    void change(void);
    void display(void);
};

void binary::takedata(void)
{
cout<<"enter the number :";
cin>>a;
cout<<endl;
}

void binary::print(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if(a.at(i)!='0' && a.at(i)!='1'){
        cout<<"this number is not binary";
        exit(0);
        }
    }
    exit(0);
    cout<<endl;
}
void binary::change(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        
        if(a.at(i)=='0'){
            a.at(i)='1';
        }
        else
        if(a.at(i)=='1'){
            a.at(i)='0';
        }
        
    }
    cout<<endl;
}
void binary::display(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        
        cout<<a.at(i);
       
    }
    cout<<endl;
}

int main(){
binary b;
b.takedata();
//b.print();
b.change();
b.display();
return 0;
}