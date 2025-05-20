#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num , original , remainder , result=0 , n=0;
    cout<<"which number :  ";
    cin>>num;
     original=num;

     int temp=num;
     while (temp!=0){
        temp/=10;
        ++n;
     }

     temp=num;
     while(temp!=0){
        remainder=temp%10;
        result +=pow(remainder, n);
        temp /= 10;
     }
     if (result == original){
        cout<<original<<"is an armstrong num \n";
     }
     else {
        cout<<original<<"is not armstrong num \n";
     }
     return 0;
}