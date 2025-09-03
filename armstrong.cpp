#include<iostream>
using namespace std;

int main(){
   int a,b,c=0,d;
   cout<<"enter the number you want to check"<<endl;
   cin>>a;
   d=a;
   while(a>0){
      b=a%10;
      c=c+(b*b*b);
      a=a/10;
   }
   if(d==c){
    cout<<"this number is armstrong"<<endl;
   }
else{
    cout<<"this number is not a armstrong"<<endl;
}
   return 0;
}