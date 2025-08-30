#include<iostream>
using namespace std;
int main(){
    int i,n,p;
    cout<<"enter the number for which you want table"<<endl;
    cin>>n;
    for(i=1;i<=10;i++){
        p=n*i;
        cout<< n<< "X"<< i<< "="<<p<<endl;
    }
}