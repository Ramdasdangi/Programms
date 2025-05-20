#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"enter any number" <<endl;
    cin>>a;
    int* b=&a;
    cout<<"you enter  "<<a<<endl;
    cout<<"memory address your number  "<<b<<endl;
    cout<<"numeber store in ("<<b<<") this address is "<<*b<<endl;
    }