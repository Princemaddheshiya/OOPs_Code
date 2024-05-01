#include<iostream>
using namespace std;
class base1
{
private:
    /* data */
public:
    void greeting(void){
        cout<<"hello  prince madheshiya "<<endl;
    }
};

class base2
{
private:
    /* data */
public:
    void greeting(void){
      cout<<"hii maddheshiya  "  <<endl;
    }
};
class total : public base1, public base2
{
 private:
     /* data */
 public:
     void greeting(void){
base2 ::greeting();
cout<<"hii maddheshiya prince  "  <<endl;
     }
};


int main(){
total p;
p.greeting();
return 0;
}
