#include<iostream>
using namespace std;

int main(){
   int b=0;
   int marks[5]={11,22,33,44,55};
   int*p=marks;
   for(int i=0;i<5;i++){
      b+=*(p+i);
   }
   cout<<"the sum of each array element is "<<b<<endl;
   
   return 0;
}