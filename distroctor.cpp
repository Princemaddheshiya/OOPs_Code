#include<iostream>
using namespace std;
int a=0;
class distroctor
{
private:
    /* data */
public:
    distroctor(void){
        a++;
cout<<"you are constoctor:"<<a<<endl;
    }
    ~distroctor(void){
        a--;
cout<<"you are distroctor:"<<a<<endl;

    }
};


int main(){
    distroctor n1;
cout<<"you are main:"<<endl;{
cout<<"you are bracket:"<<endl;
distroctor n2 ,n3;
cout<<"you are bracket end:"<<endl;
}
return 0;
}