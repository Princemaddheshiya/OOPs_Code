
#include<iostream>
using namespace std;
class Person {
    public:
    string Name;
    int Age;    
    void Setvalue(){
       
         cin>>Name;
    cin>>Age;
    }
    // Complete the class
 void Getvalue(){
     cout<<"The name of the person is"<<Name<<" and the age is "<<Age<<endl;          
 }
};
int main() {
Person a;
    
    a.Setvalue();
    a.Getvalue();
    return 0;
}