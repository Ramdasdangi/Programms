#include<iostream>
using namespace std;
int main (){
    int a= 10;
    int *p = &a;
    cout<<"address of a : "<<p<<endl;
    cout<<"value of a : "<<*p<<endl;
    return 0;
}