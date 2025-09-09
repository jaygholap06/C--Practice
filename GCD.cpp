#include<iostream>
using namespace std;
int gcd(int a ,int b){
    while(b!=0){
    int temp=b;
    b=a%b;
    a=temp; 
    }
    
}
int main(){
   int x,y;
   cout<<"enter the first number"<<endl;
   cin>>x;
   cout<<"enter the second number"<<endl;
   cin>>y;
   cout<<"the GCD is "<<gcd(x,y);
   
   return 0;
}