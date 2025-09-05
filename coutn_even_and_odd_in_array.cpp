#include<iostream>
using namespace std;

int main(){
   int b=0;
    int marks[10]={11,22,33,44,55,66,77,88,99,100};
    int*p=marks;
    for(int i=0;i<10;i++){
        b=*(p+i)%2;
        if(b==0){
        cout<<"this number "<<marks[i]<<" is even"<<endl;
        }
        else{
            cout<<"this number "<<marks[i]<<" is odd"<<endl;
        }
    }
    
    }