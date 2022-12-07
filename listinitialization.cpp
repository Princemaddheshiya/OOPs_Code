 #include<iostream>
 using namespace std;

 class listinitialization
 {
 private:
 int a,b;
     
     /* data */
 public:
     listinitialization(int e, int c):a(e),b(c+a){
 cout<<" answer a:"<<a<<endl;
 cout<<" answer b:"<<b<<endl;
     }
   
 };



 int main(){
 listinitialization d(5,6);
 return 0;
 }



