#include<iostream>
using namespace std;
int main(){
    int i=1,n,x=0;
    cout<<"enter the number till which you want sum"<<endl;
    cin>>n;
    while(i<=n){
        x+=i;
        i++;
    }
cout<<"the sum of n number is"<<x<<endl;
}

