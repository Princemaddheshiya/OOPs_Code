#include<iostream>
using namespace std;
class y;
class x
{
int a;
public:
    void take1(int v){
        a=v;
    }
    friend void add(x,y);
};
class y
{
int b;
public:
  void take2(int m){
        b=m;
    } 
    friend void add(x,y); 
};
void  add(x o1,y o2){
    cout<<"your sum ="<<o1.a+o2.b<<endl;
}
int main(){
x a1;
a1.take1(3);
y b1;
b1.take2(5);
add(a1,b1);
return 0;
}