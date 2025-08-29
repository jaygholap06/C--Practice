#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the fisrt number :"<<endl;
    cin>>a;
    cout<<"enter the second number :"<<endl;
    cin>>b;
    cout<<"enter the third number :"<<endl;
    cin>>c;
    if((a>b) && (a>c)){
        cout<<"the greatest among three is :"<<a<<endl;
    }
    if((b>a) && (b>c)){
        cout<<"the greatest among three is :"<<b<<endl;
    }
    if((c>b) && (c>a)){
        cout<<"the greatest among three is :"<<c<<endl;
    }
    }
