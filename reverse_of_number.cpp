#include<iostream>
using namespace std;

int main(){
   int a,b,c=0,d;
   cout<<"enter the bnumber you want to revesrse"<<endl;
   cin>>a;
   d=a;
   while(a>0){
    b=a%10;
    c=c*10+b;
    a=a/10;
   }
   return 0;
   if(d==c){
    cout<<"this is a palidrome"<<endl;
   }
}