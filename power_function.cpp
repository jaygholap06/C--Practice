#include<iostream>
using namespace std;
int power(int a, int b){
int c=1;
for(int i=0;i<b;i++){
   c*=a;
}
return c;
}
int main(){
   int x,y,z;
   cout<<"enter the value of x "<<endl;
   cin>>x;
   cout<<"enter the power please "<<endl;
   cin>>y;
   cout<<"the answer is "<<power(x,y);
   return 0;
}