#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a ,int b){
    int c,d;
    c=a%b;
    if(c==0){
        return d;
    }
    d=min(a,b)%gcd(min(a,b),c);
    return c;
}
int main(){
    int x,y;
    cout<<"enter the first number "<<endl;
    cin>>x;
    cout<<"enter the second number "<<endl;
    cin>>y;
    cout<<gcd(x,y);
   
   return 0;
}