#include<iostream>
using namespace std;
class base1
{
private:
    int data1;
public:
base1();
    base1(int i){
data1=i;
cout<<"your in base1:"<<data1<<endl;
    }   
};
class base2
{
private:
int data2;
    /* data */
public:
base2();
    base2(int i){
data2=i;
cout<<"your in base2:"<<data2<<endl;
    }  
};
class base3
{
private:
int data3;
    /* data */
public:
base3();
    base3(int i){
data3=i;
cout<<"your in base3:"<<data3<<endl;
    }   
};
class deriver :public base2 ,public base1 ,private base3
{
private:
int data3,data4;
    /* data */
public:
    deriver(int a,int b,int c ,int d):base1(a),base2(b),base3(c){
data3=d;
cout<<"your in deriver class:"<<data3<<endl;
    }   
};
int main(){
deriver suno(2,4,6,8);
return 0;
}