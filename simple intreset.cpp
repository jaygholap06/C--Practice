#include<iostream>
using namespace std;
int main(){
    float p,r,t,S;
    cout<<"the value of the principal is :"<<endl;
    cin>>p;
    cout<<"the value of the rate is :"<<endl;
    cin>>r; 
    cout<<"the value of the time is :"<<endl;
    cin>>t;
    S=p*r*t/100;
    cout<<"the value of simple intreset is :"<<S<<endl;
    return 0;

}