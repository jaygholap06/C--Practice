// #include<iostream>
// using namespace std;
// void num(int n){
//     if(n==0){
//         return;
//     }
//     num(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int x;
//     cout<<"enter the number"<<endl;
//     cin>>x;
//     num(x);

   
//    return 0;
// }

#include<iostream>
using namespace std;
void num1(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    num1(n-1);
}
int main(){
    int x;
   cout<<"enter the number "<<endl;
   cin>>x;
   num1(x);
   return 0;
}