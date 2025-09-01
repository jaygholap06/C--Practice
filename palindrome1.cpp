#include<iostream>
using namespace std;

int main(){
   int a,b,c=0,d;
   cout<<"enter the number you want to check"<<endl;
   cin>>a;
   d=a;
   while(a>0){
    b=a%10;
    c=c*10+b;
    a=a/10;
   }
   if(d==c){
    cout<<"this is a palidrome"<<endl;
   }
   else{
    cout<<"this is not a palindrome"<<endl;
   }
}