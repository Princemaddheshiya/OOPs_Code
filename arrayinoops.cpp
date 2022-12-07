#include<iostream>
using namespace std;
class arrayinoops
{
//private:
    /* data */
    int salary;
    int id;
public:
    void take(void){
        salary=200;
        cout<<"enter the id:"<<endl;
        cin>>id;

    }
    void print(void){
        cout<<id<<endl;
    }
    
};



int main(){
    int n;
    cout<<"enter the number of employee :"<<endl;
    cin>>n;
arrayinoops employee[n];
for (int i = 0; i < n; i++)
{
    employee[i].take();
    employee[i].print();
}

return 0;
}